#include<iostream>
using namespace std;
void shape()
{
	int n;
	cout<<"Enter the no. -";
	cin>>n;
	char sc;
	cout<<"Enter the Special character -";
	cin>>sc;
	for(int i=1; i<=n; i++)
	{
		for(int j=1; j<=i; j++)
		{
			if(sc>=33 && sc<=47 || sc>=58 && sc<=64 )
			{
				cout<<sc<<" ";
			}
			else
			cout<<"Invalid";
		}
		cout<<endl;
	}
}
int main()
{
 	shape();
}