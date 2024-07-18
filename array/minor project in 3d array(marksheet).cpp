#include<iostream>
using namespace std;
int main()
{
	int sec;
	cout<<"Enter total section - ";
	cin>>sec;
	int stu;
	cout<<"Enter total Students - ";
	cin>>stu;
	int sub;
	cout<<"Enter total Subjects - ";
	cin>>sub;
	int s=65;
	int sid=101;
	int m=1;
 	int marks[sec][stu][sub];
 	int max= sizeof(marks)/4;
 	float obtm=0;
 	float per;
 	float maxm;
 	int st=0;
 	
 	for(int i=0; i<sec; i++)
 	{
 		cout<<"---------------Section -"<<char(s)<<"---------------"<<endl<<endl;
 		s++;
 		for(int j=0; j<stu; j++)
 		{
 			cout<<"Student : "<<sid<<" -----> "<<endl;
 			for(int k=0; k<sub; k++)
 			{
 				cout<<"Sub : "<<m<<" - ";
 				cin>>marks[i][j][k];
 				m++;
			}
 			m=1;
 			sid++;
		}
		sid=101;
	}
	
	
	
	cout<<endl<<"********************|Marksheet|********************"<<endl;
 	s=65;
	for(int i=0; i<sec; i++)
 	{
 		cout<<endl<<"----------------Section- "<<char(s)<<"-----------------"<<endl;
 		s++;
 		for(int j=0; j<stu; j++)
 		{
 			cout<<"Student : "<<sid<<" -----> "<<endl;
 			for(int k=0; k<sub; k++)
 			{
 				cout<<"Sub : "<<m<<" - ";
 				cout<<marks[i][j][k]<<"/100"<<endl;
 				m++;
 				obtm=obtm+marks[i][j][k];
			}
			sid++;
			cout<<endl;
			maxm=sub*100;
 			per=(obtm*100)/maxm;
			cout<<"Total Marks - "<<obtm<<"\t"<<"Percentage - "<<per<<"%"<<endl<<endl;
			obtm=0;
			m=1;
		}
		sid=101;
		cout<<endl;
	}
}
	

