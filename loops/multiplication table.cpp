#include<iostream>
using namespace std;
int main()
{
 	int n=10;
 	int s=0;
 	for(int i=1; i<=n; i++)
 	{
 		for(int j=1; j<=n; j++)
 		{
 			s=i*j;
 			cout<<s<<"\t";
		 }
		 cout<<endl;
	 }
}
