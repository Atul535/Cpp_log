#include<iostream>
using namespace std;
int main()
{
	int n;
	int a,b,c,rev,diff;
	cout<<"Enter the no - ";
	cin>>n;
	a=n/100;
	c=n%10;
	b=n/10;
	b=b%10;
	rev=c*100+b*10+a;
	diff=n-rev;
	if(diff<0)
	diff=diff*(-1);
	cout<<diff;
}

