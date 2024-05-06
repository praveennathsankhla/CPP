#include<iostream>
#include<ctype.h>
using namespace std;
int main()
{
char character;
cout<<"enter the character::";
cin>>character;


if(isupper(character))
{
cout<<" Given character is a upercase";
}
else if(islower(character))
{
	cout<<"given character is lowercase.";}

else {
        cout<<character<<" is not an alphabet character."<<endl;
    }
return 0;
}
	

