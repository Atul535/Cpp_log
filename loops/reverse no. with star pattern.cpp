#include<iostream>
using namespace std;
int main()
{
 	int n=5;
 	int mid = n;
 	for(int i=1; i<=n; i++)
	{
		for(int j=2*n-1; j>=1; j--)
		{
			if(i==2 && j==n || i==3 && j==n || i==4 && j==n || i==5 && j==n)
			{
				cout<<"* ";
			}
			else if(i==3 && j==6 || i==3 && j==4)
			{
				cout<<"* ";	
			}
			else if(i==4 && j==6 || i==4 && j==4 || i==4 && j==7 || i==4 && j==3)
			{
				cout<<"* ";	
			}
			else if(i==5 && j==6 || i==5 && j==4 || i==5 && j==7 || i==5 && j==3 || i==5 && j==8 || i==5 && j==2)
			{
				cout<<"* ";	
			}
			else
			cout<<j<<" ";	
			
		}	
		cout<<endl;
	} 
}
