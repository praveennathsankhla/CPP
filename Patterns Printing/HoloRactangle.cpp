#include<iostream>
using namespace std;
int main(){

    int a,b;
    cout<<"Enter the value of raws: ";
    cin>>a;
    cout<<"Enter the value of Columns : ";
    cin>>b;
    for(int i=1;i<=a;i++){

     for(int j=1;j<=b;j++){

        if(j==1&&i==i||i==1&&j==j||j==b&&i==i||i==a&&j==j){
                cout<<"*";
        }
        else 
        cout<<" ";
     }
     cout<<endl;
    }
    return 0;
}
