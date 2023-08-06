#include<iostream>
using namespace std;
void merge(int *a,int s,int e){
    int mid=(s+e)/2;
    int len1=mid-s+1;
    int len2=e-mid;
    int *arr1=new int[len1];
    int *arr2=new int[len2];
    int k=s;
    for(int i=0;i<len1;i++){
        arr1[i]=a[k++];
    }
   k=mid+1;
    for(int i=0;i<len2;i++){
        arr2[i]=a[k++];
    }
    int i=0;
    int j=0;
     k=s;
    while(i<len1 && j<len2){
        if(arr1[i]<arr2[j]){
            a[k++]=arr1[i++];
        }
        else{
            a[k++]=arr2[j++];
        }
    }
    while(i<len1){
        a[k++]=arr1[i++];
    }
    while(j<len2)
    {a[k++]=arr2[j++];
    }
}
void mergeSort(int *arr,int s,int e){
    
    if(s>=e){
        return ;
    }
    int mid=(s+e)/2;
    mergeSort(arr,s,mid);
    mergeSort(arr,mid+1,e);
    merge(arr,s,e);
}
int main(){
    cout<<"Enter the size of arrary"<<endl;
    int n;
    cin>>n;
    cout<<"Now enter the elements of array "<<endl;
    int *arr=new int[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    mergeSort(arr,0,n-1);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}