#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter the no.- ";
	cin>>n;
	for(int i=1; i<=n; i++)
	{
		for(int j=1; j<=n; j++)
		{
			if(j%2==1) // if(i%2==1)
			{	
			cout<<"# ";
			}
			else
			{
			cout<<"* ";	
			}
		}
		cout<<endl;
	}
	return 0;
}

