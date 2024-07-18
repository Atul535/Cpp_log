#include<iostream>
using namespace std;
int main()
{
 	string str;
 	cout<<"Enter the name : ";
 	cin>>str;
 	int sz=str.size();
 	for(int i=sz-1; i>=0; i--)
 	{
 		cout<<str[i];
	}
}
