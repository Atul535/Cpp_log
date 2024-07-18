#include<iostream>
using namespace std;
int main()
{
 	int n;
 	cout<<"Enter the digit : ";
 	cin>>n;
 	cout<<endl;
 	
 	try
 	{
 		if(n>0)
 		{
 			cout<<"Square of digit : "<<n*n<<endl;
		}
		else 
		throw n;
	}
	catch(int n)
	{
		cout<<"Cube of digit : "<<n*n*n;
	}
}
