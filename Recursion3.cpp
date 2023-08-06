#include<iostream>
using namespace std;
bool linear_search(int *arr,int size,int element){
    if(size==0){
        return false;
    }
    if(arr[0]==element){
        return true;
    }
    else{
        return linear_search(arr+1,size-1,element);
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
    cout<<"Enter the element you want to search"<<endl;
    int element;
    cin>>element;
    bool a=linear_search(arr,n,element);
    if(a){
        cout<<"Element found "<<endl;
    }
    else{
        cout<<"Element not found"<<endl;
    }
}