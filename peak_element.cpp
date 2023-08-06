#include<iostream>
using namespace std;
int peak_element(int a[],int size){
    int start=0;
    int end=size-1;
    while(start<end){
        int mid=(start+end)/2;
        if(a[mid]<a[mid+1]){
            start=mid+1;
        }
        else{
            end=mid;
        }
    }
    return start;
}
int main(){
    cout<<"Enter the size of array"<<endl;
    int size;
    cin>>size;
    int a[size];
    cout<<"Now enter the elements of array"<<endl;
    for(int i=0;i<size;i++){
        cin>>a[i];
    }
    cout<<"peak element is : "<<peak_element(a,size)<<endl;
}