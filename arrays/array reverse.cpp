#include<iostream>
using namespace std;
int main()
{
	int a[6];
	for(int i=0;i<=5;i++)
	{
		cout<<"enter element "<<i+1;
		cin>>a[i];
	}
	for(int i=5;i>=0;i--)
	{
		cout<<a[i];
	}
	return 0;
}
