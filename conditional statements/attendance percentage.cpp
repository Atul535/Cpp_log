#include<iostream>
using namespace std;
int main()
{
	float c_held,c_attended,per;
	cout<<"Total classed held by college - ";
	cin>>c_held;
	cout<<"Total classed attended by student - ";
	cin>>c_attended;
	per=c_attended/c_held*100;
	cout<<"percentage of attended class - "<<per<<endl;
	
	if(per>75)
	cout<<"Student is allowed to sit in the exam";
	else
	cout<<"Student is not allowed to sit in the exam";
}

