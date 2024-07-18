#include<iostream>
using namespace std;
int main()
{
	int a,b;
	cout<<"Enter the size of matrix - ";
	cin>>a>>b;
	int arr[a][b];
	int s=sizeof(arr)/sizeof(arr[0]);
	int max=arr[0][0];
	for(int i=0; i<a; i++)
	{
		for(int j=0; j<b; j++)
		{
			cout<<"Enter the value in matrix - ";
			cin>>arr[i][j];
		}
	}
	
	cout<<endl<<"Value in matrix - "<<endl;
	for(int i=0; i<a; i++)
	{
		for(int j=0; j<b; j++)
		{
			cout<<arr[i][j]<<"\t";
		}
		cout<<endl;
	}
	
	for(int i=0; i<a; i++)
	{
		for(int j=0; j<b; j++)
		{
			if(arr[i][j]>arr[0][0])
			max=arr[i][j];
		}
	}
		cout<<endl<<"Max no.- "<<max<<endl;
}
