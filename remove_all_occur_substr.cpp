#include<iostream>
#include<string>
using namespace std;
string remove_str(string s,string str){
    
    while(s.length()!=0 && s.find(str)<s.length() ){
        s.erase(s.find(str),str.length());
    }
    return s;
}
int main(){
    cout<<"Enter a string "<<endl;
    string s;
    cin>>s;
    cout<<"Now enter substr "<<endl;
    string str;
    cin>>str;
    cout<<remove_str(s,str)<<endl;
}