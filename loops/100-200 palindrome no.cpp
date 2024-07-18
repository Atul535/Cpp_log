#include<iostream>
using namespace std;
int main()
{
	int t,r,sum;
	for(int n=100; n<=200; n++)
	{
		t=n;
		while(t>0)
		{
			r=t%10;
			sum=sum*10+r;
			t=t/10;
		}
		if(sum==n)
		{
			cout<<"Palindrome no. is - "<<n<<endl;
		}
		sum=0;
	}
}

