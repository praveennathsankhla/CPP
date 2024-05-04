#include<iostream>
using namespace std;
int main()
{
	int number;
	cout<<"enter number ";
	cin>>number;
	cout<<"multiple table for "<<number<<endl;
	for(int i=1;i<=10;i++)
	cout<<number<<"*"<<i<<"="<<(i*number)<<endl;
	return 0;
}
