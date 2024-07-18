#include <iostream>
using namespace std;

int main()
{
    int n ;
    cout<<"Enter the number : ";
    cin>>n;
    
    switch(n>=65 && n<=90)
    {
        case 1:
		{
            cout<<"Upper Case Letter : "<<char(n);
            break;
        
        }
        default:
        	{
        		switch(n>=97 && n<=122)
        		{
        			case 1:
        				{
        					cout<<"Lower Case Letter : "<<char(n);
        					break;
						}
					default:
						{
							switch(n>=48 && n<=57)
							{
								case 1:
									{
										cout<<"Numerical Value : "<<char(n);
										break;
									}
								default:
									{
										cout<<"Special Character : "<<char(n);
										break;	
									}	
							}
						}
						break;
				}
			}
			break;
	}
}
