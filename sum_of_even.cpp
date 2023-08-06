#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the no. "<<endl;
    cin>>n;
    int i=0;
    int sum=0;
    while(i<=n){
        sum=sum+i;
        i=i+2;
    }
    cout<<"The sum of even no. is :"<< sum<<endl;
}