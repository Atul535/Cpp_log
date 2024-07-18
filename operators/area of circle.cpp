#include<iostream>
using namespace std;
int main()
{
	int r,neg,pos;
	float area;
	cout<<"Enter the radius - ";
	cin>>r;
	area=3.14*r*r;
	
	if(r>0)
	cout<<"Area of circle is - "<<area;	
	else
	cout<<"It is a Negative number";
}

