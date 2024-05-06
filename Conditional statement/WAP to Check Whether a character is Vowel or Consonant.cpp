#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	char vc;
cout<<"enter any alphabet";
cin>>vc;
switch(vc)
{
	case 'a,e,i,o,u':
	cout<<"vowel";
	break;
	default:
		cout<<"consonat";
	}
	return 0;
}
