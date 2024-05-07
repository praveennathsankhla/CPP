#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter value of n:";
	cin>>n;
	int ld=0;
	int r=0;
	int sum=0;
	while(n>0)
	{
		ld=n%10;
		r=r*10+ld;
		n=n/10;
		if(ld%2!=0)
		{ sum=sum+ld;
		}
	}
	cout<<"sum of Odd numbers: "<<sum<<endl;
	cout<<"Reverse: "<<r;
	return 0;
}
