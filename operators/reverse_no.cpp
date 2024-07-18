#include<iostream>
using namespace std;
int main()
{
	int n;
	int a,b,c,d,rev;
	cout<<"Enter the no - ";
	cin>>n;
	a=n/1000;
	d=n%10;
	b=n/100;
	b=b%10;
	c=n/10;
	c=c%10;
	rev=d*1000+c*100+b*10+a;
	cout<<rev;
}

