#include<iostream>
using namespace std;
int main()
{
 	int s, max,min;
 	int arr[]= {22,33,22,45,67,45,90,56,99,1,44,56,67};
 	s=sizeof(arr)/sizeof(arr[0]);
 	max=arr[0];
 	min=arr[0];
 	int sum=0;
 	for(int i=0; i<s; i++)
 	{
 		if(arr[i]>max)
 		{
 			max=arr[i];
		}
	}
	
	for(int i=0; i<s; i++)
 	{
 		if(arr[i]<min)
 		{
 			min=arr[i];
		}
	}
	sum=max+min;
	cout<<"max- "<<max<<endl;
	cout<<"min- "<<min<<endl;
	cout<<"sum- "<<sum<<endl;	
}


