#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter the size of array";
	cin>>n;
	int a[n];
	for(int i=0;i<=n-1;i++)
	{
		cout<<"enter element"<<i+1<<":";
		cin>>a[i];
	}
	for(int i=0;i<=n-1;i++)
	{
		cout<<a[i];
	}
	
	return 0;
}
