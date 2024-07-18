#include<iostream>
using namespace std;
int main()
{
 	int n=5;
 	int s=1;
 	cout<<"1"<<endl;
 	for(int i=1; i<=n; i++)
 	{
 		for(int j=1; j<=2*i; j++)
		{
			if(i==1 && j==1)
			{
				s+=2;
				cout<<s<<"\t";
			}
			if(i==1 && j>1)
			{
				s--;
				cout<<s<<"\t";
			}
			if(i==2 && j<=2)
			{
				s+=2;
				cout<<s<<"\t";
				s--;
			}
			if(i==2 && j>2)
			{
				cout<<s<<"\t";
				s--;
			}
			if(i==3 && j<3)
			{
				s++;
				s+=2;
				cout<<s<<"\t";
				s++;
			}
			if(i==3 && j<=3)
			{
				s++;
				cout<<s<<"\t";
			}
		}
			cout<<endl;	
	}
}