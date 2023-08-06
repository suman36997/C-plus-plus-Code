#include<iostream>
using namespace std;
void update(int &a){
    a++;
}
int get_sum(int * ,int );
int main(){
    int i=5;
    cout<<"Before "<<i<<endl;
    update(i);
    cout<<"After "<<i<<endl;
    cout<<"Enter the value of n nos. "<<endl;
    int n;
    cin>>n;
    int *arr=new int[n];
    cout<<"Now enter the nos."<<endl;
    for(int i=0;i<n;i++){
        cin>>*(arr+i);
    }
    
    int ans=get_sum(arr,n);
    cout<<"The sum is : "<<ans<<endl;
}
int get_sum(int *arr,int n){
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=*(arr+i);
    }
    return sum;
}