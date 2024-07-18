#include<iostream>
using namespace std;
int main()
{
 	int a,b,c;
 	cout<<"Enter the value of a,b and c - ";
 	cin>>a>>b>>c;
 	int arr[a][b][c];
 	int brr[a][b][c];
 	int crr[a][b][c];
 	
 	cout<<"Enter the elements in 1st matrix - "<<endl;
 	for(int i=0; i<a; i++)
 	{
 		for(int j=0; j<b; j++)
		{
			for(int k=0; k<c; k++)
			{
			cin>>arr[i][j][k];
			}
		}
	}
	cout<<"Enter the elements in 2nd matrix - "<<endl;
	for(int i=0; i<a; i++)
 	{
 		for(int j=0; j<b; j++)
		{
			for(int k=0; k<c; k++)
			{
			cin>>brr[i][j][k];
			}
		}
	}
	cout<<"Multiplication of two matrix - "<<endl;
	for(int i=0; i<a; i++)
 	{
 		for(int j=0; j<b; j++)
		{
			for(int k=0; k<c; k++)
			{
			crr[i][j][k]=arr[i][j][k]*brr[i][j][k];
			cout<<crr[i][j][k]<<"\t";
			cout<<endl;
			}
		}
	}
	cout<<endl;
}
