#include<iostream>
using namespace std;
bool binarySearch(int *arr ,int s, int e,int element){
     
     int mid=(s+e)/2;
    if(s>e){ 
        return false;
    }
    if(arr[mid]==element){
        return true;
    }
    if(arr[mid]>element){
        return binarySearch(arr,s,mid-1,element);
    }
    else{
        return binarySearch(arr,mid+1,e,element);
    }
    
}
int main(){
    cout<<"Enter the size of array "<<endl;
    int n;
    cin>>n;
    int *arr=new int[n];
    cout<<"Now enter the elements of sorted array "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];

    }
    cout<<"Enter the element you want to search "<<endl;
    int element;
    cin>>element;
    bool a=binarySearch(arr,0,n-1,element);
    if(a){
        cout<<"Element found "<<endl;
    }
    else{
        cout<<"Element not found "<<endl;
    }
}