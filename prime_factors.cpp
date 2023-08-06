#include<iostream>
using namespace std;
int main(){
    cout<<"Enter the no. to find its prime factors"<<endl;
    int n; 
    cin>>n;
    int i=2;
    while(i<n){
        if(n%i==0){
            cout<<"prime factors of "<< n << " are "<<i<<endl;
        }
        i++;
    }
}