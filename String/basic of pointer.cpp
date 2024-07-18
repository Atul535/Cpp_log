#include<iostream>
using namespace std;
int main()
{
 	int x=10;
 	int *r;
 	r=&x;
 	cout<<x<<endl;
 	cout<<&x<<endl;    //address opr
 	cout<<r<<endl;    //referencing
 	cout<<*r<<endl;  //dereferencing through pointer
}
