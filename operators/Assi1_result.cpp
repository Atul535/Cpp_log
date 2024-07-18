#include<iostream>
using namespace std;
int main()
{
	int phy,chem,math,hin,eng;
	float obtm,per;
	int totalm=500;
	cout<<"Marks are -:"<<endl;
	cout<<"Physics - ";
	cin>>phy;
	cout<<"Chemistry - ";
	cin>>chem;
	cout<<"Maths - ";
	cin>>math;
	cout<<"Hindi - ";
	cin>>hin;
	cout<<"English - ";
	cin>>eng;
	
	obtm=phy+chem+math+hin+eng;
	cout<<"Obtained marks - "<<obtm<<endl;
	per=(obtm/totalm)*100;
	cout<<"Percentage - "<<per;
}
