#include<iostream>
using namespace std;
int sumDigit(int d){
    if(d<=0){
        return 0;
    }
    int lastDigit=d%10;
    d=d/10;
    return lastDigit+sumDigit(d);
}
int main(){
    cout<<"Enter the number to sum its digit"<<endl;
    int n;
    cin>>n;
    cout<<"The sum of its digit is:"<<endl<<sumDigit(n)<<endl;
    int a=65;
    cout<<"The value of a is "<<char(a)<<endl;
}