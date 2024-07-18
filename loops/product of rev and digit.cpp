#include<iostream>
using namespace std;
int main()
{
	int n;
	int c=0;
	cout<<"Enter the no. - ";
	cin>>n;
	int r;
	int sum=0;
	while(n>0)
	{
		r=n%10;
		sum=sum*10+r;
		n=n/10;
		c++;
	}
	cout<<"Product of rev and digit - "<<sum*c;
}
