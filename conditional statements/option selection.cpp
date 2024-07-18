#include<iostream>
using namespace std;
int main()
{
	int a,b,c,ans=0;
	cout<<"Enter the numbers - ";
	cin>>a>>b;
	cout<<"Press 1 for add \nPress 2 for subtract \nPress 3 for multiply\n";
	cin>>c;
	if(c==1)
	ans=a+b;
	else if(c==2)
	ans=a-b;
	else if(c==3)
	ans=a*b;
	else
	cout<<"Wrong option";
	cout<<"Ans is - "<<ans;
}

