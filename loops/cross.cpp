#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter the no.- ";
	cin>>n;
	int mid1= n/2;
	int mid2= (n+2)/2;
	for(int i=1; i<=n; i++)
	{
		for(int j=1; j<=n; j++)
		{
			if(i==mid1 || i==mid2 || j==mid1 || j==mid2) 
			{
				cout<<"+ ";
			}
			else
			cout<<"  ";
			
		}
		cout<<endl;
	}
}

