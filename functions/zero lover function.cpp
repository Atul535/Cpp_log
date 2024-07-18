#include<iostream>
using namespace std;
void zero()
{
	int x;
	int sum=0;
	while(1)
	{
		cout<<"Enter the number : ";
		cin>>x;
		if(x!=0)
		{
			sum=sum+x;
		}
		else
		break;
	}
	cout<<"Answer is- "<<sum<<endl;
}
int main()
{
 	zero();
}
