#include<iostream>
using namespace std;

int main() {
    int a,b,c;
    
    cout <<"a=";
   cin>>a;
   cout<<"b=";
   cin>>b;
   if(a>0&&b>0)
   {
   	c=a*b;
   	cout<<"c="<<c;
   }
   else if(a>0&&b==0)
   {
   	c=a+b;
   	cout<<c;
   }
   else if(a==0&&b>0)
   {
   	c=a-b;
   	
   	
   }
   else 
   cout<<"ok";
    return 0;
}
