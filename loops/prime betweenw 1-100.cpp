#include<iostream>
using namespace std;
int main()
{
	int c,n;
	for(int i=1; i<=n; i++)
	{
		while(n<100)
		{
			if(n%i==0)
			{
				c++;
			}
		}
	}
	if(c==0)
	{
	 cout<<"Prime no.- "<<n;	
	}
}	

