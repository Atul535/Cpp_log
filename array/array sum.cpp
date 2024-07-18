#include<iostream>
using namespace std;
int main()
{
 int arr[]={12,24,45,56,33};
 int s;
 int sum=0;
 s= sizeof(arr)/sizeof(arr[0]);
 
 for(int i=0; i<s; i++)
 {
	sum=sum+arr[i];
 	cout<<arr[i];
 	if(i<s-1)
 	{
 		cout<<" + ";
	}
 }
 	cout<<" = "<<sum;	
}
