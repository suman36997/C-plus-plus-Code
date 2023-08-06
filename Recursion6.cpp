#include<iostream>
using namespace std;
bool CheckPalidrome(string str,int s ,int e){
    if(s>e){
        return true;
    }
    if(str[s]==str[e]){
        return true;
    }
    else{
        return false;
    }
    s++;
    e--;
    CheckPalidrome(str,s,e);

}
int main(){
    cout<<"Enter a string "<<endl;
    string s;
    cin>>s;
    bool a=CheckPalidrome(s,0,s.length()-1);
    if(a){
        cout<<"Palidrome string "<<endl;
    }
    else{
        cout<<"Not a palidrome string "<<endl;
    }
}