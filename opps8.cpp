#include<iostream>
#include<string.h>
using namespace std;
class String{
    public:
    string s;
    String(){
        s="Hello";
    }
    String (string s){
        this->s=s;
    }
   String operator +(String &s1){
        s.append(s1.s);
        return s;

    }
    
    string toLower(String &s){
        for(int i=0;i<s.s.size();i++){
            
            if('A'<s.s[i]<'Z'){
                int lower=s.s[i]-'A';
               s.s[i]= 'a'+lower;
            }
        }
        return s.s;
    }
    void display(){
        
            cout<<s;       
    }



};
int main(){
    String s;
    String s1("world");
    String s2=s+s1;
    String s3;
    s3=s2.toLower(s2);
    s3.display();

}