#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter the digit - ";
	cin>>n;
	int s;
	for(int i=1; i<=n; i++)
	{
		for(int s=1; s<=n-i; s++)
		{
			cout<<" "<<"\t";	
		}
		for(int j=1; j<=i; j++)
		{
			cout<<j<<"\t";
		}
		for(int x=i-1; x>=1;x--)
		{
			cout<<x<<"\t";
		}
	
		cout<<endl;
	}
}

//(2*i-1)