#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter the digit - ";
	cin>>n;
	int t=n;
	for(int i=1; i<=n; i++)
	{
		for(int s=1; s<=n-t; s++)
		{
			cout<<" ";	
		}
		for(int j=1; j<=(2*t-1); j++)
		{
			cout<<"*";
		}
		cout<<endl;
		t--;
	}
}

