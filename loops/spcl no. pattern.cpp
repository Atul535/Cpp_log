#include<iostream>
using namespace std;
int main()
{
 	int n;
 	cout<<"Enter the no.- ";
 	cin>>n;
 	int s=1;
 	for(int i=1; i<=n; i++)
 	{
 		for(int j=1; j<=i; j++)
 		{
 			cout<<s<<"\t";
 			s=s+2;
		}
		cout<<endl;
	}
}  
