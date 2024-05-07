#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter the value of n: ";
	cin>>n;
	int sum;

	{
		if(n%2==0)
		{ sum=-n/2;
		
		}
		 if(n%2!=0)
		{
			sum=-n/2+3;
				
		}
		cout<<sum;
		
	}
	return 0;
}
