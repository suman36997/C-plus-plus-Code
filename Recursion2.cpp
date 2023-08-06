#include<iostream>
using namespace std;
bool sortedArray(int *a,int size){
    if(size==0||size==1){
        return true;
    }
    if(a[0]>a[1]){
        return false;
    }
    else{
        return sortedArray(a+1,size-1);
            }
}
int main(){
    cout<<"Enter the size of array "<<endl;
    int n;
    cin>>n;
    int *arr=new int[n];
    cout<<"Now enter the elements of array "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    bool a=sortedArray(arr,n);
    if(a){
        cout<<"Array is sorted "<<endl;
    }
    else{
        cout<<"Array not sorted "<<endl;
    }
}