#include<iostream>
using namespace std;
int main(){
    cout<<"Enter a no."<<endl;
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        int j=n;
        int count2=1;
        while(j>=i){
            cout<<count2<<" ";
            j--;
            count2++;
           
        }
        int count=i-1;
        while(count){
            cout<<"*"<<" ";
            count--;
        }
        int count1=i-1;
        while(count1){
            cout<<"*"<<" ";
            count1--;
        }
        int j1=n+1-i;
       int count4=n-i+1;
       for(int j=1;j<=count4;j++){
        cout<<j1<<" ";
        j1--;
        
       }
        
        
    cout<<endl;
    i++;
    }
}