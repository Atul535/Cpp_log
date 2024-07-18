#include<iostream>
#include<math.h>
using namespace std;

void armstrong()
{
	int x,rev,c,sum=0;
	cout<<"Enter the number : ";
	cin>>x;
	
	c=log10(x)+1;
	cout<<"Counter : "<<c<<endl;
	
	int t=x;
	while(t>0)
	{
		rev=t%10;
		sum=sum+pow(rev,c);
		t=t/10;
	}
	cout<<"Sum : "<<sum<<endl;
	
	if(x==sum)
		cout<<"Armstrong Number!!";
	else
		cout<<"Not a Armstrong Number!!";	
}
int main()
{
 	armstrong();
}
