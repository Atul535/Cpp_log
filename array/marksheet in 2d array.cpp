#include<iostream>
using namespace std;
int main()
{
 	int stu = 2;
 	int sub = 5;
 	int marks[stu][sub];
 	int obtm = 0;
 	int maxm = 500; 
 	float per;
 	int c=0;
 	
 	for(int i=0; i<stu; i++)
 	{
 		for(int j=0; j<sub; j++)
 		{
 			cout<<"Enter the marks of student "<<i+1<<" : ";
 			cin>>marks[i][j];
		}
	}
	cout<<endl;
	for(int i=0; i<stu; i++)
 	{
 		cout<<"Student ID : "<<i+1<<" :---> "<<endl;
 		for(int j=0; j<sub; j++)
 		{
 			cout<<marks[i][j]<<"/100"<<endl;
			if(marks[i][j]<34)
			{
				c++;
			}
 			obtm=obtm+marks[i][j];
		}
		per= (obtm*100)/maxm;
		cout<<"Total Marks: "<<obtm<<" \t Percentage - "<<per<<" % \t";
		cout<<"No. of back log:"<<c<<"\t";
		obtm=0;
		c=0;
		cout<<"Grade : ";
		if(per<34)
		cout<<"F";
		else if(per<40)
		cout<<"D";
		else if(per<50)
		cout<<"C";
		else if(per<60)
		cout<<"B";
		else if(per<70)
		cout<<"B+";
		else if(per<80)
		cout<<"A";
		else if(per<90)
		cout<<"A+";
		else if(per>90)
		cout<<"O";
		cout<<endl<<endl;
	}
}

