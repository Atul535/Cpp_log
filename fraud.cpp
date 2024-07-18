#include <iostream>
using namespace std;

int main()
{
    float total=0;
int sc=2, st=2,sb=3;   
int marks[sc][st][sb] = {    {{20,13,14},{11,11,11}}    ,    { {1,18,13},{12,12,19} }  };

int ts1=0,ts2=0,ts3=0, tsc1=0,tsc2=0;
int ttl[sc][st];

for(int i = 0; i<sc; i++)
{
    for(int j=0; j<st; j++)
    {
        for(int k = 0; k<sb; k++)
        {
            cout<<"marks are: "<<marks[i][j][k]<<"  ";
            total = total + marks[i][j][k];
            
            if(ts1<marks[i][j][0])
            {
                ts1 = marks[i][j][0];
            }
            
            if(ts2<marks[i][j][1])
            {
                ts2 = marks[i][j][1];
            }
            
            if(ts3<marks[i][j][2])
            {
                ts3 = marks[i][j][2];
            }
            
           
            
            
        }
        cout<<"\t"<<"total :"<<total<<"\t"<<"% :"<<float(total)/3;
        
        ttl[i][j] = float(total)/3;
        cout<<endl;
        total = 0;
    }
    cout<<"-----------------------"<<endl;
    
    
    
}


    cout<<"Toper of Subject 1 : "<<ts1<<endl;
    cout<<"Toper of Subject 2 : "<<ts2<<endl;
    cout<<"Toper of Subject 3 : "<<ts3<<endl;
    
    
    
    
    cout<<endl<<endl;
    for(int i = 0; i<sc; i++)
{
    for(int j=0; j<st; j++)
    {
       //cout<<ttl[i][j]<<"  "; 
       if(tsc1 < ttl[0][j])
       {
           tsc1 = ttl[0][j];
       }
       if(tsc2 < ttl[1][j])
       {
           tsc2 = ttl[1][j];
       }
    }
    cout<<endl;
}
    cout<<"Toper of sec 1 : "<<tsc1<<endl;
    cout<<"Toper of sec 2 : "<<tsc2<<endl;
}