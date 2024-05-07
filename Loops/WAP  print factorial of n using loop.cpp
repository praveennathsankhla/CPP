#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter the value of n : ";
	cin>>n;
	int f=1;//n 0 aa rha tha 
	int k=n;
while(n>0){

		f=f*n;
		n=n-1; 
}
cout<<"Factorial of "<<k<<" is "<<f<<".";
return 0;
}
