#include<iostream>
using namespace std;
int main(){
    cout<<"Enter a no."<<endl;
    int n;
    cin>>n;
    int count=1;
    int i=1;
    while(i<=n){
        int j=1;
        while(j<=n){
            cout<<count<<" ";
            j++;
            count++;
        }
        cout<<endl;
        i++;
    }
}