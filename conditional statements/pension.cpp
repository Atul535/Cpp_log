#include<iostream>
using namespace std;
int main()
{
	char g;
	cout<<"Enter the gender - ";
	cin>>g;
	int age;
	if(g=='m'|| g=='M')
	{
		cout<<"Male"<<endl;
		cout<<"Male does not have privelege";
	}
	else
	{
		if(g=='f'|| g=='F')
		{
			cout<<"Female"<<endl;
			cout<<"Enter the age - ";
			cin>>age;
		
		if(0<age && age<=15)
		cout<<"Pension is 100 per month";
		else if(16<=age && age<=25)
		cout<<"Pension is 500 per month";
		else if(26<=age && age<=50)
		cout<<"Pension is 1000 per month";
		else if(age>51)
		cout<<"Pension is 800 per month";
		}
		else
		cout<<"invalid";
	}
	
	
		
	
}

