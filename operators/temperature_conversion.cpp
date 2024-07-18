 #include<iostream>
using namespace std;
int main()
{
	float cel,far,kel;
	cout<<"Enter the temperature in celcius :- ";
	cin>>cel;
	far=(cel*9/5)+32;
	cout<<"Temperature in Farenheit - "<<far<<endl;
	kel=(cel+273.15);
	cout<<"Temperature in Kelvin - "<<kel<<endl;
	
	cout<<"Enter the temperature in Farenheit :- ";
	cin>>far;
	cel=(far-32)*5/9;
	cout<<"Temperature in Celcius - "<<cel<<endl;
	kel=(far-32)*5/9+273.15;
	cout<<"Temperature in Kelvin - "<<kel<<endl;
	
	cout<<"Enter the temperature in Kelvin :- ";
	cin>>kel;
	cel=kel-273.15;
	cout<<"Temperature in Celcius - "<<cel<<endl;
	far=(kel-273.15)*9/5+32;
	cout<<"Temperature in Farenheit - "<<far;
}

