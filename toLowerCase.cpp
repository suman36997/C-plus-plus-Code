#include<iostream>
using namespace std;
string tolower(string &s){
   
    for(int i=0;i<s.size();i++){
            if('a'<s[i]&&s[i]<'z'){
                s[i]=s[i];
            }
            
            else {
                int lower=s[i]-'A';
               s[i]= 'a'+lower;
            }
            
        }
        return s;
}
string toUpper(string &s){
   
    for(int i=0;i<s.size();i++){
            if('A'<s[i]&&s[i]<'Z'){
                s[i]=s[i];
            }
            
            else {
                int upper=s[i]-'a';
               s[i]= 'A'+upper;
            }
            
        }
        return s;
}
int main(){
    string s;
    cin>>s;
    string s1=tolower(s);
    string s2=toUpper(s);
    cout<<s1<<endl;
    cout<<s2;
}
