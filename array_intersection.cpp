#include<iostream>
using namespace std;
void intersection(int arr1[],int arr2[],int size){
    for (int  i = 0; i < size; i++)
    {
        for(int j=0;j<size;j++){
            if(arr1[i]==arr2[j]){
                cout<<arr1[i]<<" ";
            }
        }
    }
    
}
int main(){
    cout<<"Enter the size of array"<<endl;
    int size;
    cin>>size;
    int arr1[size];
    int arr2[size];
    for(int i=0;i<size;i++){
        cin>>arr1[i];
    }
    cout<<"Now enter the elements for secoand array"<<endl;
    for(int i=0;i<size;i++){
        cin>>arr2[i];
    }
    intersection( arr1, arr2, size);

}