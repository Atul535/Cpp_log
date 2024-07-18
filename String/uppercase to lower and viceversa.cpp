#include<iostream>
using namespace std;
void conversion()
{
	string str;
	cout<<"Enter the String : ";
	cin>>str;
	int s=str.size();
	for(int i=0; i<s; i++)
	{
		if(str[i]>='A' && str[i]<='Z')
		{
			str[i]=str[i]+32;
		}
		else if(str[i]>='a' && str[i]<='z')
		{
			str[i]=str[i]-32;
		}
	}
	cout<<"Converted to viceversa case : "<<str;
}
int main()
{
 	conversion();
}
