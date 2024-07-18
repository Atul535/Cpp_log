#include<iostream>
using namespace std;
int main()
{
 	int n;
	int s=1; 	
	cout<<"Enter the no - ";
 	cin>>n;
 	for(int i=1; i<=n; i++)
 	{
 		for(int j=1; j<=i; j++)
 		{
 			s%=10;
			cout<<s<<" ";
			s+=2;
			if(s==7)
			{
				s+=2;
			}	
		}
		cout<<endl; 
	}
}

