#include<iostream>
using namespace std;
int main()
{
	int sal,duration;
	float bonus;
	cout<<"Enter the salary - ";
	cin>>sal;
	cout<<"Enter the working duration in years - ";
	cin>>duration;
	bonus=sal*5/100;
	
	if(duration>5)
	cout<<"Salary with bonus is - "<<sal+bonus;
	else
	cout<<"Salary is - "<<sal;
}

