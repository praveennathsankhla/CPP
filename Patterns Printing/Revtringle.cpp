#include<iostream>
using namespace std;
int main() {
    int n;
     cout<<"inter the number of raws: ";
   cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=i;j<=n;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;

}