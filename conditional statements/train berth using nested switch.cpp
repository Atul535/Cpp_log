#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter the seat no- ";
	cin>>n;
	
	if(n>=1 && n<=72)
	{
		cout<<"Valid seat"<<endl;
		
		switch(n%8==0)
		{
			case 1:
				{
					cout<<"Side Upper Berth";
					break;
				}
			default:
				{
					switch(n%8==7)
					{
						case 1:
							{
								cout<<"Side Lower Berth";
								break;
							}
						default:
							{
								switch(n%8==1 || n%8==4)
								{
									case 1:
									{
										cout<<"Lower Berth";
										break;
									}
									default:
									{
										switch(n%8==2 || n%8==5)
										{
											case 1:
												{
													cout<<"Middle Berth";
													break;
												}
											default:
												{
													switch(n%8==3 || n%8==6)
													{
														case 1:
															{
																cout<<"Upper Berth";
															}
													}
												}
												break;
										}
									}
									break;	
								}	
							}
							break;
					}
				}
				break;
		}
	}
	else
	cout<<"Invalid seat";
}

