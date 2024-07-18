#include<iostream>
using namespace std;
void prime(int);
int main()
{
 	prime(9);
 	prime(10);
 	prime(11);
 	prime(13);
}

void prime(int x)
{
	int c=0;
	for(int i=2;i<x/2; i++)
	{
    	if(x%i==0)
    	{
        	c++;
        	//cout<<i<<"  "<<endl;
    	}
	}

	if(c==0)
	{
    	cout<<"Number is prime number."<<endl;
	}
	else
	{
    	cout<<"Number is not prime number."<<endl;
	}
}