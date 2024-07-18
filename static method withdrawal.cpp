#include<iostream>
using namespace std;
class bank
{
	public:
	static int bal;
	
	atm(int x)
	{
		bal-=x;
	}
	upi(int x)
	{
		bal-=x;
	}
	manual(int x)
	{
		bal-=x;
	}
	
};
int bank::bal=5000;
int main()
{
 	bank b1;
 	cout<<"Balance : "<<b1.bal<<endl;
 	cout<<"Balance after atm withdrawal : "<<b1.atm(1000)<<endl;
 	cout<<"Balance after UPI withdrawal : "<<b1.upi(2000)<<endl;
 	cout<<"Balance after manual withdrawal : "<<b1.manual(1500)<<endl;
}
