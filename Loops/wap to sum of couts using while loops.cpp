#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"enter the value of n:";
	cin>>n;
	int ld;
	int sum=0;
	while(n!=0)
	{
		ld=n%10;
		sum=sum+ld;
		n=n/10;
	}
	cout<<sum;
	return 0;
}
