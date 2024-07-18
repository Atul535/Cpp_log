#include<iostream>
using namespace std;
int main()
{
	int s=10;
 	int arr[s];
 	int c=0;
 	cout<<"Enter the elements in array : ";
 	for(int i=0; i<s; i++)
 	{
 		cin>>arr[i];
	}
	cout<<"Elements in array is : "<<endl;
 		for(int i=2; i<=s;i++)
 		{
 			int t = i;
			 for(int j=2; j<t; j++)
			 {
			 	if(t%j==0)
        		{
            		c++;
        		}
			 }	
			if(c==0)
    		{
        		cout<<"This is prime "<<t<<endl;
    		}
		   	c=0;
		}
}
