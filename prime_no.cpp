#include<iostream>
using namespace std;
int main(){
    cout<<"Enter the no. to check wheather it is prime or not"<<endl;
    int n ;
    cin>>n;
    int i=2;
    while (i<n){
        if(n%i==0){
            cout<<"Not prime for"<<i<<endl;
        }
        else{
            cout<<"prime for "<<i<<endl;
        }
        i++;
    }
}