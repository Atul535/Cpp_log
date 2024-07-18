#include<iostream>
using namespace std;
int main()
{
	int age;
	cout<<"Enter the age - ";
	cin>>age;
	if(age<13)
	cout<<"Parents consent is required";
	else
	{
		if(age>=13)
		cout<<"You are allowed to watch Horror movies";
	}
}

