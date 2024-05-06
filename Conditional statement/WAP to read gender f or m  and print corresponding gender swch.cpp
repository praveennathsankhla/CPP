#include<iostream>
using namespace std;
int main()
{
	char gender;
	cout<<"Enter The gender F/M"<<endl;
	cin>>gender;
	switch(gender)
	{
case 'm':
cout<<"male";
break;
case 'f':
cout<<"female";
break;
default:
cout<<"Please enter the valide gender.Enter f/m";                                                                                                                                       
	}
	return 0;
	
}
