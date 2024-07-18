#include<iostream>
using namespace std;
int main()
{
	int a,b,c;
	cout<<"Enter the size of matrix - ";
	cin>>a>>b>>c;
	int arr[a][b][c];
	int s=sizeof(arr)/sizeof(arr[0]);
	int max=arr[0][0][0];
	for(int i=0; i<a; i++)
	{
		for(int j=0; j<b; j++)
		{
			for(int k=0; k<c; k++)
			{
				cout<<"Enter the value in matrix - ";
				cin>>arr[i][j][k];
			}
		}
	}
	
	cout<<endl<<"Value in matrix - "<<endl;
	for(int i=0; i<a; i++)
	{
		for(int j=0; j<b; j++)
		{
			for(int k=0; k<c; k++)
			{
				cout<<arr[i][j][k]<<"\t";
			}
		}
		cout<<endl;
	}
	
	for(int i=0; i<a; i++)
	{
		for(int j=0; j<b; j++)
		{
			for(int k=0; k<c; k++)
			{
				if(arr[i][j][k]>arr[0][0][0])
				max=arr[i][j][k];
			}
		}
	}
			cout<<endl<<"Max no.- "<<max<<endl;
}
