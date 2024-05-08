#include<iostream>
using namespace std;
int main()
{
	int a[4]={2,4,5,6};
	int sum=0;
	for(int i=0;i<=4;i++)
	{
		sum=sum+a[i];
	}
	cout<<sum;
	return 0;
}
