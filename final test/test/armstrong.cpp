#include<iostream>
#include<math.h>
using namespace std;
int main()
{
 	int n,t,c=0, rev, sum=0;
 	cout<<"Enter the no. : ";
 	cin>>n;
 	
 	t=n;
 	while(t>0)
 	{
 		t=t/10;
 		c++;
	 }
	 cout<<c<<endl;
	 t=n;
	 while(t>0)
	 {
	 	rev=t%10;
	 	sum=sum+pow(rev,c);
	 	t=t/10;
	 }
	 cout<<sum<<endl;
	 
	 if(sum==n)
	 cout<<"Armstrong";
	 else
	 cout<<"Not armstrong";

}
