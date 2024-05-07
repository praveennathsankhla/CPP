#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter the value of n:";
	cin>>n;
	int reverse=0;
	int ld=0;
	while(n!=0)
	{
		
		ld=n%10;
			reverse=reverse*10+ld;
			n=n/10;

	}
		cout<<reverse;
	return 0;
}
