#include<iostream>
#include<String.h>
using namespace std;
int main()
{
 	string str;
 	cout<<"Enter the string : ";
 	getline(cin,str);
 	int s= str.size();
 	int uc=0;
 	int lc=0;
 	int n=0;
 	int sc=0;
 	
 	for(int i=1; i<=s; i++)
 	{
 		if(str[i]>='a' && str[i]<='z')
 		{
 			lc++;
		}
		else if(str[i]>='A' && str[i]<='z')
 		{
 			uc++;
		}
		else if(str[i]>='0' && str[i]<='9')
 		{
 			n++;
		}
		else
		sc++;
	}
	
	cout<<"No. of upper case : "<<uc<<endl;
	cout<<"No. of lower case : "<<lc<<endl;
	cout<<"No. of  numerical digit : "<<n<<endl;
	cout<<"No. of special characters : "<<sc<<endl;
}
