 #include<iostream>
using namespace std;
int main()
{
 	int s, max,max2,min,min2,sum=0;
 	int arr[]= {22,33,22,45,67,45,90,56,99,99,99,7,7,1,1,44,97,95,56,67};
 	s=sizeof(arr)/sizeof(arr[0]);
 	max=arr[0];
 	max2=arr[0];
 	min=arr[0];
 	min2=arr[0];
 	for(int i=0; i<s; i++)
 	{
 		if(arr[i]>max)
 		{
 			max2=max;
 			max=arr[i];
		}
		//2nd max value
		else if(arr[i]>max2 && max==max2)
		{
			max2=arr[i];
		}            
		
	}
	for(int i=0; i<s; i++)
 	{
 		if(arr[i]<min)
 		{
 			min2=min;
 			min=arr[i];
		}
		//2nd min value
		else if(arr[i]<min2 && min==min2)
		{
			min2=arr[i];
		}
	}
	sum=max2+min2;
	cout<<"max- "<<max<<endl;
	cout<<"min- "<<min<<endl;
	cout<<endl;
	cout<<"max2- "<<max2<<endl;
	cout<<"min2- "<<min2<<endl;
	cout<<endl;
	cout<<"sum- "<<sum;
}
