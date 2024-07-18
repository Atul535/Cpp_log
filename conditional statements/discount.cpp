#include<iostream>
using namespace std;
int main()
{
	int qty,totalcost,dis;
	int cost=100;
	cout<<"Enter the quantity - ";
	cin>>qty;
	totalcost=qty*100;
	dis=totalcost*10/100;
	
	if(qty>1000)
	cout<<"Amount with discount = "<<totalcost-dis;
	else
	cout<<"Amount = "<<totalcost;
}

