#include<iostream>
using namespace std;

 	int lcm(int x, int y)
 	{
 		int mx= (x<y)?y:x;
 		int lcm2=mx;
 		while(true)
 		{
 			if(lcm2%x==0 && lcm2%y==0)
 			{
 				break;
			 }
			 lcm2++;
		 }
		 return lcm2;
	}
	
	int hcf(int x, int y)
{
		int hc=2;
    while(1)
	{
		if(x%hc==0 && y%hc==0)
		{
			break;
		}
		hc++;
	}
    return hc;
}

int main()
{
	cout<<"Lcm : "<<lcm(12,16)<<endl;
	cout<<"hcf is "<<hcf(12,16)<<endl;
}


// take a random no. no. should be less than 100 and greater than 10