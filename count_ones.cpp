#include<iostream>
using namespace std;
int main(){
    cout<<"Enter the value of n"<<endl;
    int n;
    cin>>n;
    int count=0;
   while(n!=0){
        if((n&1)==1){
            count ++;
        }
        n=n>>1;
    }
    cout<<"The no. of ones is "<<endl<<count <<endl;
}