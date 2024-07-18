#include <iostream>
using namespace std;

int main()
{
int sec = 65;
int marks[3][4][2];
int sid=0;

for(int i=0; i<3; i++)
{
    for(int j=0; j<4; j++)
    {
        for(int k=0; k<2; k++)
        {
            cout<<"Enter value of "<<i<<j<<k<<"  :  ";
            cin>>marks[i][j][k];
        }
    }
}


for(int i=0; i<3; i++)
{
    cout<<"-------------"<<char(sec)<<"-------------"<<endl;
    sec++;
    for(int j=0; j<4; j++)
    {
        for(int k=0; k<2; k++)
        {
        	cout<<"Student "<<sid+1<<" : ";
            cout<<marks[i][j][k]<<"\t";
            l++;
            
        }
        cout<<endl;
    }
    cout<<"--------------------------------------"<<endl;
    sid=0;
}
    
}