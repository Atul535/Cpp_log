#include<iostream>
using namespace std;
int main()
{
	int cr_score;
	cout<<"Enter the credit score of applicant - ";
	cin>>cr_score;
	if(cr_score>700)
	cout<<"Loan Approved";
	else
	{
		if(cr_score<600)
		cout<<"Loan Application Rejected";
		else
		{
			if(cr_score>=600 && cr_score<=700)
			cout<<"Additional information required";
		}
	}
}

