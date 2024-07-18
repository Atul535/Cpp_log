#include<iostream>
using namespace std;
int main()
{
 	int n;
 	int s=65;
 	cout<<"Enter the no - ";
 	cin>>n;
 	for(int i=1; i<=n; i++)
 	{
 		for(int j=1; j<=i; j++)
 		{
		 cout<<char(s)<<" ";
		 s+=2;
		}
		cout<<endl; 
	}
}

