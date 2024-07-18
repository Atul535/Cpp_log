#include<iostream>
using namespace std;

void pswdcheck()
{
	string str;
	cout<<"Enter the Password : ";
	getline(cin,str);
	int s =str.size();
	int uc=0,lc=0,sc=0,num=0;
	for(int i=0; i<s; i++)
	{
		if(str[i]>='A' && str[i]<='Z')
		{
			uc++;
		}
		else if(str[i]>='a' && str[i]<='z')
		{
			lc++;
		}
		else if(str[i]>='0' && str[i]<='9')
		{
			num++;
		}
		else
		{
			sc++;
		}
	}
	if(s>=8)
	{
		if(uc>=1 && lc>=1 && num>=1 && sc>=1)
		{
			cout<<endl<<"Strong Password";
		}
		else
		cout<<endl<<"Invalid Password!! - password should have at least 1 uppercase, 1 lowercase, 1 digit and 1 special character";
	}
	else
	cout<<"Weak Password";
	
}
int main()
{
 	pswdcheck();
}

