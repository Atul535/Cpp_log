#include<iostream>
using namespace std;
int main()
{
	int a,b,c,min,lcm;
	cout<<"Enter the digits - ";
	cin>>a>>b>>c;
	if(a<b && a<c)
	{
		min=a;
		//cout<<"Minimum value is- "<<a;	
	}
	else if(b<a && b<c)
	{
		min=b;
		//cout<<"Minimum value is- "<<b;	
	}
	else 
	{
		min=c;
		//cout<<"Minimum value is- "<<c;
	}
	
	lcm=min;
	while(1)
	{
		if(lcm%a==0 && lcm%b==0 && lcm%c==0)
		{	
		cout<<"LCM is - "<<lcm;
		break;
		}
		lcm++;
	}
}

