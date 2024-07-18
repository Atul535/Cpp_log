#include<iostream>
using namespace std;
int main()
{
	int age;
	cout<<"Enter the age :- ";
	cin>>age;
	
	if(0<age && age<=12)
	{
		cout<<"Child";
	}
	else
	{
		if(12<age && age<=17)
		{
			cout<<"Teenager";
		}
		else
		{
			if(17<age && age<=50)
			{
				cout<<"Young";
			}
			else
			{
				if(50<age && age<=100)
				{
					cout<<"Old";
				}
				else
				{
					cout<<"Expired";
				}
			}
		}
	}
}

