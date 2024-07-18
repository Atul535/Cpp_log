#include<iostream>
using namespace std;
class mobile
{
	public:
	int call()
	{
		cout<<"This is a calling feature!!"<<endl;
	}
	int msg()
	{
		cout<<"This is a messaging feature!!"<<endl;
	}
	
	int virtual beautify()=0;	
	int virtual autohacking()=0;
	int virtual surgery()=0;
};
class feature : public mobile
{
	public:
	int beautify()
	{
		cout<<"This is a beautifying feature!!"<<endl;
	}
	int autohacking()
	{
		cout<<"This is a autohacking feature!!"<<endl;
	}
	int surgery()
	{
		cout<<"This is a surgery feature!!"<<endl;
	}
};
int main()
{
 	feature f;
 	f.autohacking();
 	f.beautify();
 	f.call();
 	f.msg();
 	f.surgery();
}
