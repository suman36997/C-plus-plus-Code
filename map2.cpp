#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    cout<<"Enter the size of array"<<endl;
    int n;
    cin>>n;
    int arr[n];
    int mx=INT_MIN;
    map<int,int>freq;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        freq[arr[i]]++;
        if(mx>arr[i]){
            mx=arr[i];
        }
    }
    for(auto it:freq){
        if((it.first==mx && it.second>1)|| (it.second>2)){
            cout<<"False"<<endl;
            return 0;//yeha poora int main se hi return krwaa diya

        }
        

        
    }
            cout<<"True"<<endl;

}