#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int n,a,b,t,t1,sum,sum2,sum3=0;
	int d;
	cout<<"Enter the value of n : ";
	cin>>n;
	if(n>9 && n<100)
	{
 			t=n;
 			a=t/10;
 			b=t%10;
 			sum=a+b;
 			sum2=pow(sum,2)+pow(sum,3);
 			
			cout<<"Sum 2 : "<<sum2<<endl<<endl;
 		
 			t1=sum2;
 			while(t1>0)
 			{	
 				d=t1%10;
				sum3=sum3+d;
				t1=t1/10; 	
			
			}
 			if(sum3<10)
 			{
 				sum3=sum3+10;
				cout<<"Sum 3 after adding 10: "<<sum3<<endl;
			}
			else
			cout<<"Sum 3 greater than 10 : "<<sum3<<endl;
	}
	else
	cout<<"Invalid no.!!";
}