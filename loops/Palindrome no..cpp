#include<iostream>
using namespace std;
int main()
{
	int n,rev,sum=0,c=0,t;
	cout<<"Enter the number - ";
	cin>>n;
	t=n;
	while(t>0)
	{
		rev=t%10;
		sum=sum*10+rev;
		t=t/10;
		c++;	
	}
	if(sum==n)
	{
		cout<<"Palindrome no.";
	}
	else
	cout<<"No Palindrome no.";	
}

