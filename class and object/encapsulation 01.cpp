#include<iostream>
using namespace std;
class sal
{
	private:
		int s;
		
	public:	
		void getdata()
		{
			int x;
			cout<<"Enter the salary : ";
			cin>>x;
			s=x;
		}
		void showdata()
		{
			cout<<"Salary is : "<<s;
		}	
};

int main()
{
 	sal s1;
	 s1.getdata();
	 s1.showdata();		
}
