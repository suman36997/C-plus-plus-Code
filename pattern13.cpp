#include<iostream>
using namespace std;
int main(){
    cout<<"Enter a no."<<endl;
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        int space=0;
        while(space<(i-1)){
            cout<<" ";
            space++;

        }
        int j=4;
        while(i<=j){
            cout<<"*";
            j--;
        }
        cout<<endl;
        i++;
    }
}