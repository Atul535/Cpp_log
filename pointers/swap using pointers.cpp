#include <iostream>
using namespace std;
void swap (int *x, int *y)
{
    
    int *t; 
    t = x;
    x = y;
     y = t;
     
     
//     cout<<*x<<" and "<<*y;
    
    
}
int main()
{

int a = 10;
int b = 20;

int *aa, *bb;
 bb = &a;
 aa = &b;
cout<<*aa<<" and "<<*bb<<endl;
swap(a, b);

}