#include<iostream>
using namespace std;
int main(){

    int m;
    cout<<"Enter the number of Raws: ";
    cin>>m;

    for(int i=1;i<=m;i++){

        for(int j=m-i;j<=(2*i-1);j++){

            if(j=2*i-1){
            cout<<"*";}  
            else if(j=m-i) 
            cout<<" ";              
        }
        cout<<endl;
    }
    return 0;
}