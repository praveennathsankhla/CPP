#include<iostream>
using namespace std;
int  main()
{
	int marks[10];
	for(int i=0;i<=9;i++)
	{
		cout<<"Enter the Element"<<i+1<<":";
		cin>>marks[i];
	}
	for(int i=1;i<=9;i++)
	{
		if(35>marks[i])
		
		cout<<i;
		
	}
	return 0;
}
