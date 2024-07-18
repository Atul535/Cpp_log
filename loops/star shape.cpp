#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter the no.- ";
	cin>>n;
	for(int i=1; i<=n; i++)
	{
		for(int j=1; j<=i; j++)//<--for straight flag
		//for(int j=1; j<=n-i+1; j++)<--for reverse flag
		//for(int j=1; j>i-1; j--)<--for reverse flag
		//for(int j=n; j>=i; j--)      
		{                       
			cout<<"*";
		}
		cout<<endl;
	}
}

