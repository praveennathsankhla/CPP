#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter the value of n:";
	cin>>n;
	int sum=0;
	int ld=0;
	while(n!=0)
	{
		ld=n%10;
	
		if(ld%2!=0)
		{
			sum=sum+ld;
			break;
			
		}else{ cout<<"There's not any odd number";
		break;
		}
			n=n/10;
			cout<<sum;
	
		return 0;
	}
	
}
