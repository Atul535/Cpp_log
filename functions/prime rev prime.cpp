#include<iostream>
using namespace std;
void prime()
{
	int n, c=0,c1=0;
	int rev,sum=0;
	cout<<"Enter the number : ";
	cin>>n;
	for(int i=2; i<n/2; i++)
	{
		if(n%i==0)
		{
			c++;
		}
		
	}
	if(c==0)
	{
		cout<<"Number is prime"<<endl;
		while(n>0)
		{	
		rev=n%10;
		sum=sum*10+rev;
		n=n/10;
		}
		cout<<"Reverse : "<<sum<<endl;
		for(int i=2; i<sum; i++)
		{
			if(sum%i==0)
			{
				c1++;
			}
		}
		if(c1==0)
		cout<<"Rev no. is prime";
		else
		cout<<"Rev is not prime";
	}
	else
	cout<<"Not prime";
			
}
int main()
{
 	prime();
}
