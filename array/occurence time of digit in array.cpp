#include <iostream>
using namespace std;

int main()
{

int arr[] = {13,123,3,45,234,3,45,45,67,45,68,45,7809,8,45,7,30,6,34,5,23,41,23,42,35,34,6,67,567,867,89};
int c=0;
int s = sizeof(arr)/4;
int srch;
cout<<"Enter the number for search : ";
cin>>srch;

for(int i =0; i<s; i++)
{
    if(arr[i] == srch)
    {
        c++;
    }
}
cout<<"Element found !!"<<c<<" times"<<endl;



}