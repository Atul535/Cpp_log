#include<iostream>
using namespace std;
int main()
{
 	string str;
 	str="atul mishra";
 	char ch;
 	cout<<"Enter the character : ";
 	int sz=str.size();
 	int c=0;
 	cin>>ch;
 	for(int i=0; i<sz; i++)
 	{
 		if(str[i]==ch)
 		{
 			c++;
		}
	}
	cout<<"Repetition : "<<c;
}
