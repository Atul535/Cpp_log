#include<iostream>
using namespace std;
int main()
{
 	int arr[]={11,12,13,14,15,16,17,18,19,20};
 	int s;
 	s=sizeof(arr)/sizeof(arr[0]);
 	int sum=0;
 	
	 for(int i=0; i<s; i++)
	 {
	 	if(arr[i]%2==0)
	 	{
	 		sum=sum+arr[i];
		 	cout<<arr[i];
			if(i<s-1)
			{
		 		cout<<" + ";
			}
		}
	 }
	 cout<<" = "<<sum;
}
