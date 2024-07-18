#include<iostream>
using namespace std;
int main()
{
 	int arr[]={11,12,13,14,15,16,17,18,19,20};
 	int s;
 	s=sizeof(arr)/sizeof(arr[0]);
 	int sum1=0,sum2=0,s1=0,s2=0;
 	
	 for(int i=0; i<s; i++)
	 {
	 	if(arr[i]%2==1)
	 	{
	 		sum1=sum1+arr[i];
		 	cout<<arr[i];
			if(i<s-2)
			{
		 		cout<<" + ";
			}
		}
	}
	cout<<" = "<<sum1<<endl;
		
	for(int i=0; i<s; i++)
	{
		if(arr[i]%2==0)
	 	{
	 		sum2=sum2+arr[i];
		 	cout<<arr[i];
			if(i<s-1)
			{
		 		cout<<" + ";
			}
		}
	 }
	 cout<<" = "<<sum2<<endl;
	 
	 s1=sum1-sum2;
	 s2=sum2-sum1;
	 cout<<"Odd - Even = "<<s1<<endl;
	 cout<<"Even - Odd = "<<s2<<endl;
}
