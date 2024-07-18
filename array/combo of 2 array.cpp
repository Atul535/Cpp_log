#include <iostream>
using namespace std;

int main()
{
int arr[]={4,7,3,5};
int brr[] = {7,5,9,12,11,17};

int s1 = sizeof(arr)/4;
int s2 = sizeof(brr)/4;

int s = s1+s2;

int crr[s];

for(int i=0; i<s1; i++)
{
    crr[i] = arr[i];
}

for(int j = s1; j<s; j++ )
{
    crr[j] = brr[j-s1];
}
for(int k=0; k<s; k++)
{
    cout<<crr[k]<<" , ";
}

}