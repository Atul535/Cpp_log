#include<iostream>
using namespace std;
int main()
{
	float arr[] = {1.1,3.3,4.5,3.4,8.7,6.7,5.4,6.7,9.8,6.7,2.2,3.5,4.7,1.5};
	int s= sizeof(arr)/sizeof(arr[0]);
	float t;
 	for(int i=0; i<s; i++)
 	{
 		for(int j=i+1; j<s; j++)
 		{
 			if(arr[i]>arr[j])
 			{
 				t=arr[i];
				arr[i]=arr[j];
				arr[j]=t; 	
			}
		}
	}
		cout<<endl<<"value - ";
		for(int i=0; i<s; i++)
		{	
			cout<<arr[i]<<", ";
		}
}