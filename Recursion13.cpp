#include<iostream>
using namespace std;
bool checkPalidrome(char s[],int size){
    int start=0;
    int end=size-1;
    if(start>=end){
        return true;
    }
    if(s[start]!=s[end])
    {
        return false;
        
    }   
    start++;
    end--;
    checkPalidrome(s,size-1);
    return true;
}
int main(){
    cout<<"Enter the size of string"<<endl;
    int n;
    cin>>n;
    cout<<"Enter the string"<<endl;
    char *p=new char[n];
    for(int i=0;i<n;i++){
        cin>>p[i];
    }    
    int check=checkPalidrome(p,n);
    if(check){
        cout<<"It's a palidrome string"<<endl;
    }
    else{
        cout<<"Not a palidrome string"<<endl;
    }

}
