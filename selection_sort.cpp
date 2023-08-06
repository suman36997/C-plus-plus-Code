#include<iostream>
using namespace std;
void selection_sort(int a[],int size){
    for(int i=0;i<size-1;i++){
        int min_index=i;
        for(int j=i+1;j<size;j++){
            if(a[min_index]>a[j]){
                min_index=j;
            }
        }
        swap(a[i],a[min_index]);
    }
}
int main(){
    cout<<"Enter the size of array"<<endl;
    int size;
    cin>>size;
    cout<<"Enter the array elements"<<endl;
    int a[size];
    for(int i=0;i<size;i++){
        cin>>a[i];
    }
    selection_sort(a,size);
    cout<<"Now elements after sorting using selection sort"<<endl;
    for(int i=0;i<size;i++){
        cout<<a[i]<<" ";
    }
}