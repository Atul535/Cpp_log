#include<iostream>
using namespace std;
int main()
{
	int height,breadth,area,perimeter;
	cout<<"Insert the Parameters :-"<<endl;
	cout<<"Height is - ";
	cin>>height;
	cout<<"Breadth is - ";
	cin>>breadth;
	area=height*breadth;
	cout<<"Area of rectangle is - "<<area<<endl;
	perimeter=2*(height+breadth);
	cout<<"Perimeter of Rectangle is - "<<perimeter;
}
