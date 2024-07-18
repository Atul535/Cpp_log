#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter the digit - ";
	cin>>n;
	int s=1;
	for(int i=1; i<=n; i++)
	{
		for(int s=1; s<=n-i; s++)
		{
			cout<<" "<<"\t";	
		}
		for(int j=1; j<=(2*i-1); j++)
		{
			cout<<s<<"\t";
			s++;
		}
		cout<<endl;
	}
}

