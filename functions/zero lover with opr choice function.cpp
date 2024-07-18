 #include<iostream>
using namespace std;
void zero()
{
	float n;
	float sum=0,sub=0,mul=1;
	float div=1;
	int ch;
	while(1)
	{
		cout<<"Enter the digit : ";
		cin>>n;
		int t=n;
		if(n!=0)
		{
			cout<<"Enter 1 for addition"<<endl;
			cout<<"Enter 2 for subtraction"<<endl;
			cout<<"Enter 3 for multiplication"<<endl;
			cout<<"Enter 4 for division"<<endl;
			
			cout<<"Enter choice : ";
			cin>>ch;
			
			switch(ch)
			{
				case 1:
				{
					sum=sum+n;
					break;
				}
				case 2:
				{
					sub=sub-n;
					break;
				}
				case 3:
				{
					mul=mul*n;
					break;
				}
				case 4:
				{
					div=t/div;
					t=0;
					break;
				}
				default:
				{
					cout<<"Wrong Option";
					break;
				}
			}
		cout<<endl;
		}
		else
		break;
	}
	cout<<endl;
	if(ch==1)
	cout<<"Sum is : "<<sum;
	else if(ch==2)
	cout<<"Sub is : "<<sub;
	else if(ch==3)
	cout<<"Mul is : "<<mul;
	else if(ch==4)
	cout<<"Div is : "<<div;	
}
int main()
{
 	zero();
}

