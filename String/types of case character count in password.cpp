#include<iostream>
using namespace std;

void casecount()
{
	string str;
	cout<<"Enter the Password : ";
	cin>>str;
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
	cout<<"Upper case : "<<uc<<endl;
	cout<<"Lower case : "<<lc<<endl;
	cout<<"Number : "<<num<<endl;
	cout<<"Special Character : "<<sc<<endl;
}
int main()
{
 	casecount();
}
