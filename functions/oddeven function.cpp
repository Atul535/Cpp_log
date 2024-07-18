#include<iostream>
using namespace std;
void oddeven(int);
int main()
{
 	oddeven(4);
 	oddeven(7);
}

void oddeven(int x)
{
	if(x%2==0)
	cout<<"Number is even"<<endl;
	else
	cout<<"Number is odd";
}
