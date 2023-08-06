#include<iostream>
using namespace std;
int main(){
    cout<<"Enter the no. "<<endl;
    // int num;
    char num;
    cin>>num;
    if(num>='a'&&num<='z'){
        cout<<"its a lower case"<<endl;
    }
    else if (num>='A'&&num<='Z'){
        cout<<"Its a upper case "<<endl;
    }
    else{
        cout<<"Its a numeric "<<endl;
    }
}