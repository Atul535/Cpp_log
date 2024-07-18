#include<iostream>
using namespace std;
int main()
{
	char arr[] = {'A','T','U','L'};
	int s= sizeof(arr)/sizeof(arr[0]);
	char t;
	cout<<endl<<"Letters - ";
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
		
		cout<<arr[i]<<" ";
	}
}