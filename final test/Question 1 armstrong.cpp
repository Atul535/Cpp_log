#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int n,sum=0,r=0,c=0;
	cout<<"Enter the no. : ";
	cin>>n;
	
	int t=n;
	
	while(t>0)
	{
		t=t/10;
		c++;
	}
	t=n;
	while(t>0)
	{
		r=t%10;
		sum =sum+pow(r,c);
		t=t/10;
	}
	
	cout<<"Sum : "<<sum<<endl;
	if(sum==n)
	{
		cout<<"This is armstrong";
	}
	else
	cout<<"Not a armstrong";
 	
}
