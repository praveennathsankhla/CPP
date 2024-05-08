#include<iostream>
using namespace std;
int main()
{
	int a[5]={4,5,8,2,7};
	int min=INT_MAX;
	for(int i=0;i<=4;i++)
	{
		if(min>a[i])
		{
			min=a[i];
		}
	}
	cout<<min;
	return 0;
}
