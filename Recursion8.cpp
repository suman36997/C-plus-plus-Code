#include<iostream>
using namespace std;
void bubbleSort(int *arr,int size){
    
    
   if(size==0||size==1){
    return;
   }
   for(int i=0;i<size;i++){ 
    int j=i+1;
    if(arr[i]>arr[j]){
        swap(arr[i],arr[j]);
    } 
    }
  
        bubbleSort(arr,size-1);
   
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
    bubbleSort(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}