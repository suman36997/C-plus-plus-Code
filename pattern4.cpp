#include<iostream>
using namespace std;
int main(){
    cout<<"Enter a no."<<endl;
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        int j=n;
        while(i<=j){
            cout<<j<<" ";
            j--;
        }
        cout<<endl;
        i++;
    }
}