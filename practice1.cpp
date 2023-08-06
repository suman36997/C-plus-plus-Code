#include<iostream>
using namespace std;
int rev_digit(int num){
    int digit=0;
    while(num>0){
        digit=digit*10+num%10;
        num=num/10;
    }
    return digit;
}
int main(){
    cout<<"Enter the no. to rev. its digit"<<endl;
    int a;
    cin>>a;
    int b=rev_digit(a);
    cout<<"Digit after rev. is "<<b<<endl;


}