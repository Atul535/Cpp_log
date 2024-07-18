#include<iostream>
using namespace std;
int main()
{
 	int n=5;
 	int s=1;
 	for(int i=1; i<=n; i++)
 	{
 		for(int j=1; j<=2*i-1; j++)
		{
			if(i==1)
			{
				s=2*i-1;
				cout<<s;
			}
			else if(i==2 && j<=2)
			{
				s++;
				cout<<s<<" ";
			}
			else if(i==2 && j>2)
			{
				s--;
				cout<<s<<" ";
			}
			else if(i==3 && j<=3)
			{
				s++;
				cout<<s<<" ";
			}
			else if(i==3 && j>3)
			{
				s--;
				cout<<s<<" ";
			}
			else if(i==4 && j<=4)
			{
				s++;
				cout<<s<<" ";
			}
			else if(i==4 && j>4)
			{
				s--;
				cout<<s<<" ";
			}
			else if(i==5 && j<=5)
			{
				s++;
				cout<<s<<" ";
			}
			else if(i==5 && j>5)
			{
				s--;
				cout<<s<<" ";
			}
		}
			cout<<endl;	
	}
}