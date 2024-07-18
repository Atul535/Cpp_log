#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter the odd no.- ";
	cin>>n;
	int mid= (n+1)/2;
	int mh= (mid+1)/2;
	int mhh= n-(mh+2)/2;
	for(int i=1; i<=n; i++)
	{
		for(int j=1; j<=n; j++)
		{
			if(i==mid || j==mid || (i==1 && j>=mid) || (i==n && j<=mid) || (j==1 && i<=mid) || (j==n && i>=mid) || 
			(i<=mid && j<=mid && i==mh && j==mh) ||(i>=mid && j<=mid && i==mhh && j==mh) || (i<=mid && j>=mid && i==mh && j==mhh) ||
			(i>=mid && j>=mid && i==mhh && j==mhh))
			{
				cout<<"* ";
			}
			else
			cout<<"  ";
		}
		cout<<endl;
	}
}

