#include<iostream>
using namespace std;
int main()
{
	int ram,shyam,govind;
	cout<<"Enter the of ram - ";
	cin>>ram;
	cout<<"Enter the of shyam - ";
	cin>>shyam;
	cout<<"Enter the of govind - ";
	cin>>govind;
	
	if(ram>shyam && shyam>govind)
	cout<<"Ram is oldest and govind is youngest";
	else
	{
		if(ram>govind && govind>shyam)
		cout<<"Ram is oldest and shyam is youngest";
		else if(shyam>ram && ram>govind)
		cout<<"Shyam is oldest and govind is youngest";
		else if(shyam>govind && govind>ram )
		cout<<"Shyam is oldest and ram is youngest";
		else if(govind>shyam && shyam>ram )
		cout<<"Govind is oldest and ram is youngest";
		else if(govind>ram && ram>shyam)
		cout<<"Govind is oldest and shyam is youngest";
	}
}

