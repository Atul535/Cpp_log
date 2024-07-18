#include<iostream>
using namespace std;
int main()
{
 	int n;
 	cout<<"Enter the no. - ";
 	cin>>n;
 	{
 		for(int i=1; i<=n; i++)
 		{
 			for(int j=n; j>=i; j--)
 			{
 				cout<<"* ";
			}
			for(int s=1 ;s<=i-1; s++)
			{
				cout<<"  ";
			}
			for(int s=1 ;s<=i-1; s++)
			{
				cout<<"  ";
			}
			for(int j=n; j>=i; j--)
			{
				cout<<"* ";
			}	
			cout<<endl;
		} 
	
		for(int i=2; i<=n; i++)
 		{
 			for(int j=1; j<=i; j++)
 			{
 				cout<<"* ";
			}
			for(int s=n; s>=i+1; s--)
			{
				cout<<"  ";
			}
			for(int s=n; s>=i+1; s--)
			{
				cout<<"  ";
			}
			for(int j=1; j<=i; j++)
			{
				cout<<"* ";
			}	
			cout<<endl;
		}
   }
}