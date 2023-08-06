#include<iostream>
using namespace std;
void Rev_an_array(int a[],int size){
    
    int end=size-1;
    int start=0;
    while(start<=end){
        int fun=a[start];
        a[start]=a[end];
        a[end]=fun;
        start++;
        end--;
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
    Rev_an_array(a,n);
    cout<<"Array after reversing"<<endl;
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}