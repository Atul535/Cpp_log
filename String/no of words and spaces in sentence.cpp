#include<iostream>
using namespace std;
int main()
{
 	string str;
 	cout<<"Enter the Sentence : ";
 	getline(cin, str);
 	int sz=str.size();
 	int c=0;
 	for(int i=0; i<sz; i++)
 	{
 		if(str[i]==32)
 		{
 			c++;
		}
	}
	cout<<"Spaces : "<<c<<endl;
	cout<<"Words : "<<c+1;
}
