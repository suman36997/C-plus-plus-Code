#include<iostream>
#include<vector>
#include<string>
using namespace std;
void reverse(vector <char> a){
    int s=0;
    int e=a.size()-1;
    while(s<=e){
        swap(a[s],a[e]);
    }
}
vector <char> reverse_alternate(vector<char> s){
    vector <char> a;
    int i=0;
    for(int i=0;i<s.size();i++){
        while(s[i] !=' '){
        
        a[i]=s[i];
    }
    if(s[i] ==' '){
        reverse(a);
    }
        a[i]=' ';
        // while(s[i]!='\0'){
        //      reverse(s);
        // a[i]=s[i];
        // }


    }
    return a;
    
}
int main(){
    cout<<"Enter your strings"<<endl;
    vector <char> s;
    for(int i=0;i<s.size();i++){
        char temp;
        cin>>temp;
        s.push_back(temp);
    }
    reverse_alternate(s);
}