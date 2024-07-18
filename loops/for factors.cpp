#include<iostream>
using namespace std;
int main()
{
	int c=0;
	for(int i=1; i<=10; i++)
	{
		cout<<"Factor of "<<i<<endl;
		cout<<"Factors are: ";
		for(int j=1; j<=i; j++)
		{
			if(i%j==0)
			{
				c++;
				cout<<j<<" ";
			}
		}
		cout<<endl<<"Count is: "<<c<<endl;
		cout<<"----------------------------------------"<<endl;
		c=0;
	}
}
