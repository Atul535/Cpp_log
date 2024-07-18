#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	 float x,n,sum=1,fact=1;
 cout<<"Enter the value of x - ";
 cin>>x;
 cout<<"Enter the value of term - ";
 cin>>n;
 for(int i=1; i<=n; i++)
 {
 	fact=fact*i;		
	sum=sum+pow(x,i)/fact;
 }
 cout<<"Sum is - "<<sum;
}

