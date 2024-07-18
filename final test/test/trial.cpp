#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int n,a,b,t=0,t1=0,sum=0,sum2=0,sum3=0,sum4=0;
	int d;
	cout<<"Enter the value of n : ";
	cin>>n;
	for(int i=1; i<=3; i++)
	{
		t=n;
		if(t>9 && t<100)
		{
 			
 			while(t>0)
 			{	
 				a=t%10;
 				sum=sum+a;
 				t=t/10;
			}
 			sum2=pow(sum,2)+pow(sum,3);
 			
			cout<<"Sum 2 : "<<sum2<<endl;
 		
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
			{
				cout<<"Sum 3 greater than 10 : "<<sum3<<endl;
			}

				n=sum3;
			cout<<endl<<endl;
		}
	
	}
}

//#include<iostream>
//#include<math.h>
//using namespace std;
//
//int thesis(int n)
//{
//	int a,b,t,t1,sum,sum2,sum3=0;
//	int d;
//	if(n>9 && n<100)
//	{
// 			t=n;
// 			a=t/10;
// 			b=t%10;
// 			sum=a+b;
// 			sum2=pow(sum,2)+pow(sum,3);
// 			
//			cout<<"Sum 2 : "<<sum2<<endl<<endl;
// 		
// 			t1=sum2;
// 			while(t1>0)
// 			{	
// 				d=t1%10;
//				sum3=sum3+d;
//				t1=t1/10; 	
//			
//			}
// 			if(sum3<10)
// 			{
//				return sum3+10;
//			}
//			else
//			return sum3;
//			
//	} 
//	else
//	{
//		cout<<"Invalid no.!!";
//	}
//}
//
//int main()
//{
//	int n;
//	cout<<"Enter the value of n : ";
//	cin>>n;
//	cout<<thesis(n)<<endl;
//}

