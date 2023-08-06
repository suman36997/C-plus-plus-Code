#include<iostream>
using namespace std;
int main(){
    cout<<"Enter a no."<<endl;
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        // print space
        int space=n-i;
        while(space){
            cout<<" ";
            space--;

        }
        // print pattern
        int j=1;
        while(j<=i){
            cout<<"*";
            j++;
        }
        cout<<endl;
        i++;


    }
}