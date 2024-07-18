#include<iostream>
using namespace std;
class sum
{
	private:
		int a,b;
		public:
			sum(int x, int y)
			{
				a=x;
				b=y;
			}
			void show()
			{
				if(a%2==0)
				{
					cout<<"Odd value a : "<<a+1<<endl;
				}
				else
				{
				cout<<"value of a  : "<<a<<endl;
				}
				if(b%2!=0)
				{
				cout<<"Even value b : "<<b+1<<endl;
				}
				else
				{
				cout<<"value of b  : "<<b<<endl;
				}
			}
			sum operator +(sum obj)
			{
				sum temp(0,0);
				temp.a=a+obj.a;
				temp.b=b+obj.b;
				
				
				return temp;
			}
};
int main()
{
 	sum o1(10,20);
	sum o2(10,20);
	sum o3(0,0);
	o3=o1+o2;
	o3.show();
}
