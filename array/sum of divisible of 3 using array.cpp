#include<iostream>
using namespace std;
int main()
{
 	int arr[]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
 	int s;
 	s=sizeof(arr)/sizeof(arr[0]);
 	int sum=0;
 	
	 for(int i=0; i<s; i++)
	 {
	 	if(arr[i]%3==0)
	 	{
	 		sum=sum+arr[i];
		 	cout<<arr[i];
			if(i<s-3)
			{
		 		cout<<" + ";
			}
		}
	 }
	 cout<<" = "<<sum;
}
