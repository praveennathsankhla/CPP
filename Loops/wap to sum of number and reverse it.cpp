#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<" Enter Value of n: ";
	cin>>n;
	int ld=0;
	int rsum=0;
	int sum=0;
	int r=0;
	while(n>0)
	{ 
	ld=n%10;
	r=r*10+ld;
	n=n/10;
	rsum=rsum+ld;
	}
	cout<<" Reverse  : "<<r;
	cout<<" sum :"<<rsum*2;
	
}
