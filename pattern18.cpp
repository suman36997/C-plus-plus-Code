#include<iostream>
using  namespace std;
int main(){
    cout<<"Enter the value of n"<<endl;
    int n;
    cin>>n;
    int count=0;
    for(int i=0;i<n;i++){
        count++;
        for(int j=0;j<n;j++){
            if(i==j){
                cout<<count;
            }
            else{
                cout<<" ";
            }
        }
        for(int j=1;j<(2*((n-i)-1));j++){
            cout<<" ";
        }
        for(int j=0;j<n-1;j++){
            if(i==j){
                cout<<count;
            }
        }
        cout<<endl;
    }
    int count1=n;
    for(int i=1;i<n;i++){
        count1--;
        for(int j=n-1;j>0;j--){
            if(i==j){
                cout<<count1;
            }
            else{
                cout<<" ";
            }
        }
        for(int j=0;j<(2*i);j++){
            cout<<" ";
        }
        for(int j=0;j<n;j++){
            if(i==j){
                cout<<count1;
            }
        }
        cout<<endl;
    }   
}