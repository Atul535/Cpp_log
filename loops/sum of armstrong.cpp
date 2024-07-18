#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int t,r,c=0,sum=0,count,gt=0;
	for(int n=1;n<=10000;n++)
	{
		t=n;
		while(t>0)
		{
			t=t/10;
			c++;
		}
		t=n;
		while(t>0)
		{
			r=t%10;
			sum=sum+pow(r,c);
			t=t/10;
		}
		if(sum==n)
		{
			cout<<"This is Armstrong no.- "<<n<<endl;
			count++;
			gt+=n;
		}
		sum=0;
		c=0;
	}
	cout<<"Total Armstrong no. is - "<<count<<endl;
	cout<<"Sum of Armstrong no. is - "<<gt;
}

