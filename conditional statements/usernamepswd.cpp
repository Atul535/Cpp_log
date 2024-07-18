#include<iostream>
using namespace std;
int main()
{
	int username,pswd;
	cout<<"Enter the username - ";
	cin>>username;
	cout<<"Enter the password - ";
	cin>>pswd;
	if(username==pswd)
	cout<<"Access Granted";
	else
	cout<<"Access Denied";
}

