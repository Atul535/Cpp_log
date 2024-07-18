#include <iostream>
using namespace std;

// Main function to run the program
int main() 
{ 
    int arr[] = {1,2,3,4,5,6,7,8,9,2,3,4,5,6,7,8,11,2,3,11,44,55,44}; 
    int n = sizeof(arr)/sizeof(arr[0]); 

    int visited[n];

    for(int i=0; i<n; i++)
	{

        if(visited[i]!=1)
		{
           int count = 1;
           for(int j=i+1; j<n; j++)
		   {
              if(arr[i]==arr[j])
			  {
                 count++;
                 visited[j]=1;
              }
            }

            cout<<arr[i]<<" occurs at "<<count<<" times "<<endl;
         }
     }

    return 0; 
}