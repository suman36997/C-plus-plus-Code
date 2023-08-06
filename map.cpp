#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int fact(int a){
    if(a==0|| a==1){
        return 1;
    }
    return a*fact(a-1);
}
int main(){
    cout<<"Enter a string "<<endl;
    string str;
    cin>>str;
    map<char,int>freq;
    for(int i=0;i<str.size();i++){
        freq[str[i]]++;
    }
    for(auto it:freq){
        cout<<it.first<<" "<<it.second<<endl;
    }
    int ans=fact(str.size());
    
    //to itrate the map
    //it.first give the key of map
    //auto is a datatype
    for(auto it:freq){
        if(it.second>=2){
            ans=ans/fact(it.second);
        }
    }
    cout<<"Required value is "<<ans<<endl;

}