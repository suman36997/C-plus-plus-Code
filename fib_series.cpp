#include<iostream>
using namespace std;
int main(){
    cout <<"Enter a no."<<endl;
    int n;
    cin>>n;
    int a=0;
    int b=1;
    cout<<"fib series:"<<endl<<a<<" "<<b<<" "; 

    for(int i=1;i<=n;i++){
        int next_num=a+b;
        cout<<next_num<<" ";
        a=b;
        b=next_num;
    }
}