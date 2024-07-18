#include <iostream>
using namespace std;
bool isprime (int x)
{
    int c=0;
    for(int i=2; i<x; i++)
    {
        if(x%i==0)
        {
            c++;
        }
    }
    if(c==0)
        return true;
    else
        return false;
}

int main()
{

int sinu[] = {12,23,34,45,56,67,78,89,32,43,65,76,87,101};
int s = sizeof(sinu)/4;
for(int i=0; i<s; i++)
{
    int t = 0;
    t = isprime(sinu[i]);

    sinu[i] = t;

}
for(int i=0; i<s; i++)
{
    cout<<sinu[i]<<"  ";

}
}