#include<iostream>
using namespace std;
class bs
{
	public:
		float bsal;
		float gsal;
		float TA;
		float HRA;
		float DA;
		float tax;
		float pf;
		float ded;
		float sum;
		bs(int x)
		{
			bsal=x;
			cout<<"Basic salary is : "<<bsal<<endl;
		}
		
		bs (bs &i)
			{	
			bsal=i.bsal;

			TA=bsal*0.1;
			cout<<"TA is : "<<TA<<endl;
			HRA=bsal*0.15;
			cout<<"HRA is : "<<HRA<<endl;
			DA=bsal*0.25;
			cout<<"DA is : "<<DA<<endl;
			tax=bsal*0.05;
			cout<<"Tax is : "<<tax<<endl;
			pf=bsal*0.12;
			cout<<"Pf is : "<<pf<<endl;
			sum=TA+HRA+DA;
			ded=tax+pf;
			gsal=bsal+sum-ded;
			cout<<"Gross salary is : "<<gsal<<endl;
			}
};
int main()
{
 	bs o1(25000);
 	bs o2(o1);
}
       