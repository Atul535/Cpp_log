#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter the no. - ";
	cin>>n;
	
	if(n>0)
	{
		if(n%2!=0)
		{
			if(n%5==0)
			{
				if(n%3==0)
				cout<<"Successful";
				else
				cout<<"Not Successful";
			}
			else
			cout<<"Not divisible by 5";
		}
		else
		cout<<"Value is even";	
	}
	else
	cout<<"Value is negative";
}

