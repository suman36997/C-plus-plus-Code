#include<iostream>
using namespace std;
void selectionSort(int *arr,int size){
     int i=0;
   int min=i;

    if(size==0||size==1){
        return;
    }
    for(int j=i+1;j<size;j++){
        if(arr[min]>arr[j]){
            min=j;
        }
    }
    swap(arr[i],arr[min]);
   i++;
    selectionSort(arr,size-1);

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
    selectionSort(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

}