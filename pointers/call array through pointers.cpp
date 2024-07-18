#include <iostream>
using namespace std;

void callarr(int *a, int s)
{
    int sum = 0;
    for(int i=0; i<s; i++)
    {
        sum = sum + *(a +i);
    }
    
    cout<<sum;
}

int main()
{

int arr[5] = {1,2,3,4,5};
int *pv = arr;
 
callarr(pv, 5);
}