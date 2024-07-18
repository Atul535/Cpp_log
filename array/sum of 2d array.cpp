#include<iostream>
using namespace std;
int main()
{
 	int a,b;
 	cout<<"Enter the value of a and b - ";
 	cin>>a>>b;
 	int arr[a][b];
 	int brr[a][b];
 	int crr[a][b];
 	
 	cout<<"Enter the elements in 1st matrix - "<<endl;
 	for(int i=0; i<a; i++)
 	{
 		for(int j=0; j<b; j++)
		{
			cin>>arr[i][j];
		}
	}
	cout<<"Enter the elements in 2nd matrix - "<<endl;
	for(int i=0; i<a; i++)
 	{
 		for(int j=0; j<b; j++)
		{
			cin>>brr[i][j];
		}
	}
	cout<<"Sum of two matrix - "<<endl;
	for(int i=0; i<a; i++)
 	{
 		for(int j=0; j<b; j++)
		{
			crr[i][j]=arr[i][j]+brr[i][j];
			cout<<crr[i][j]<<"\t";
			cout<<endl;
		}
	}
	cout<<endl;
}
