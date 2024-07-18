#include<iostream>
using namespace std;
void lcm()
{
	int a,b;
 	cout<<"Enter the value of a and b : ";
 	cin>>a>>b;
 	
 	int min=(a>b)?a:b;
 	int lcm=min;
 	while(1)
 	{
 		if(lcm%a==0 && lcm%b==0)
 	{
 		cout<<"Lcm of a and b : "<<lcm<<endl;
 		break;
	}
	lcm++;
	}
	int r=0,sum=0;
	int t=lcm;
	
		if(lcm%2==0)
		{
			while(t>0)
			{
				r=t%10;
				sum=sum*10+r;
				t=t/10;
			}
		}
	cout<<"Reverse is : "<<sum<<endl;
}
int main()
{
 	
 	lcm();
}
