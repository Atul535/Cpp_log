#include<iostream>
using namespace std;
int main()
{
 	int a=2,b=3,c=1;
 	int mx= (a>b)?(a>c)?a:c : (b>c)?b:c;
 	cout<<mx;
}
