#include<iostream>
using namespace std;
int main()
{
	int n;
	int a,b,c,d,s1,s2,fin;
	cout<<"Enter the no - ";
	cin>>n;
	a=n/1000;
	d=n%10;
	b=n/100;
	b=b%10;
	c=n/10;
	c=c%10;
	s1=a+c;
	s2=b+d;
	fin=s1-s2;
	cout<<fin;
}

