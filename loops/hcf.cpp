#include<iostream>
using namespace std;
int main()
{
	int a,b,hcf=2;
	cout<<"Enter the digits - ";
	cin>>a>>b;
	while(1)
	{
		if(a%hcf==0 && b%hcf==0)
		{
			break;
		}
		hcf++;
	}
			cout<<"HCF is - "<<hcf;
}

