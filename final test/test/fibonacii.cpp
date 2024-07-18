#include<iostream>
using namespace std;
int main()
{
 	int n=30;
 	int a=0;
 	int b=1;
 	int t;
 	
 	cout<<a<<"  "<<b<<"  ";
 	
 	for(int i=2;i<=n; i++ )
 	{
 		t=a+b;
 		a=b;
 		b=t;
		cout<<t<<"  ";
	}
}
