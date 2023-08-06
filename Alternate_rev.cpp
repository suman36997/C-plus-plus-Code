#include<iostream>
using namespace std;
void swap_alternate(int a[],int size){
    int start=0;
    int next=1;
    while(next<size){
        int fun=a[start];
        a[start]=a[next];
        a[next]=fun;
        
        start+=2;
        next+=2;
        
    }
}
int main(){
    cout<<"Enter the size of array"<<endl;
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    swap_alternate(a,n);
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}