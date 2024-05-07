#include<iostream>
using namespace std;
int main()
{
	int i;
	int n;
	cout<<" enter the value of n : ";
	cin>>n;
	for(i=1;i<=n;i=i+2) // [i<=2*n-1] bh kar sakte hein
	cout<<" "<<i;
	return 0;
}

