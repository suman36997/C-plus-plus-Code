#include<iostream>
using namespace std;
char max_occur(string s)
{
    int a[26]={0};
    int number=0;
    for(int i=0;i<s.length() ;i++){
        if(s[i]>'a'&&s[i]<'z'){
            number=s[i]-'a';
        }
        else{
            number=s[i]-'A';
        }
        a[number]++;
    }
    int maxi=-1;int ans=0;
    for(int i=0;i<26;i++){
        if(maxi<a[i]){
            ans=i;
            maxi=a[i];
        }

    }
    char final_ans='a'+ans;
    return final_ans;

}
int main(){
    cout<<"Enter a string to check the letter most occur"<<endl;
    string s;
    cin>>s;
    cout<<max_occur(s);
}