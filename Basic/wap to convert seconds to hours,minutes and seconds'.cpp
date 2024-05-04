#include<iostream>
using namespace std;
int main()
{
	int seconds;
	cout<<"enter number of seconds";
	cin>>seconds;
	
	
	
	int hours,minuets,s,t;
	hours=seconds/3600;
	t=seconds%3600;
	minuets=seconds/60;
	s=seconds%60;
	cout<<"hours="<<hours;
	cout<<"."<<s<<endl;
	cout<<"minuets="<<minuets;
	cout<<"."<<t;

	return 0;
}
