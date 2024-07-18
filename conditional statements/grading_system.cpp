#include<iostream>
using namespace std;
int main()
{
	int phy,chem,math,hin,eng;
	float obtm,per,avg;
	int totalm=500;
	int totalsub=5;
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
	cout<<"Percentage - "<<per<<endl;
	avg=obtm/totalsub;
	cout<<"Average - "<<avg<<endl;
	
	if(0<per && per<=40)
	{
		cout<<"Grade is F";
	}
	else
	{
		if(40<per && per<=50)
		cout<<"Grade is D";
		else if(50<per && per<=60)
		cout<<"Grade is C";
		else if(60<per && per<=70)
		cout<<"Grade is B";
		else if(70<per && per<=80)
		cout<<"Grade is B+";
		else if(80<per && per<=90)
		cout<<"Grade is A";
		else if(90<per && per<=100)
		cout<<"Grade is A+";
	}
}

