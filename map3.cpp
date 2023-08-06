#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    cout<<"Enter a string"<<endl;
    string s;
    cin>>s;
    int max=0;
    map<char,int>freq;
    for(int i=0;i<s.length();i++){
        freq[s[i]]++;
        
    }
    
    for(auto it:freq){
        cout<<it.first<<" "<<it.second<<endl;;
        if(max<it.second){
            max=it.second;
            
            
        }
        
    }
    cout<<"The characters with max freq is "<<max<<" and its iteration is "<<endl;
}