#include<iostream>
using namespace std;
void reverse(string &s,int st,int e){
    if(st>e){
        return;
    }
    swap(s[st],s[e]);
    st++;
    e--;
    reverse(s,st,e);
    
}
int main(){
    cout<<"Enter the string "<<endl;
    string s;
    cin>>s;
    reverse(s,0,s.length()-1);
    cout<<s;
}