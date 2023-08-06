#include<iostream>
using namespace std;
int rev_digit(int num){
    int rev=0;
    while(num>0){
        rev=rev*10+num%10;
        num=num/10;
    }
    return rev;
}
int  main(){
    cout<<"Enter the no. to reverse"<<endl;
    int num;
    cin>>num;
    int x=rev_digit(num);
    cout<<"The digit after rev is"<<x;


}