#include<iostream>
#include<string>
using namespace std;
bool valid(char ch){
    if((ch>='a'&&ch<='z') ||(ch>='A'&&ch<='Z') || (ch>='0'&&ch<='9')){
        return 1;
    }
    return 0;
}
char to_lowercase(char ch){
    if(ch>='a'&&ch<='z'){
        return ch;
    }
    else{
        char temp;
        temp=ch-'A'+'a';
        return temp;
    }

}
bool check_palidrome(string a){
    int st=0;
    int e=a.size()-1;
    while(st<=e){
        if(a[st]!=a[e]){
            return 0;
        }
        else{
            st ++;
            e--;
        }
    }
    return 1;
}
bool is_palidrome(string s){
    string temp;
    //faltu charactor hata do
    for(int i=0;i<s.size();i++){
        if(valid(s[i])){
            temp.push_back(s[i]);
        }
    }
    // change to lower case
    for(int i=0;i<s.size();i++ ){
        temp[i]=to_lowercase(temp[i]);
    }
    return check_palidrome(temp);
}
int main(){
    cout<<"Enter a string"<<endl;
    string s;
    cin>>s;
     int a= check_palidrome(s);
    if(a==1){
        cout<<"palidrome"<<endl;
    }
    else{
        cout<<"not palidrome"<<endl;
    }



}