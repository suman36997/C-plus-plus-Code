#include<iostream>
using namespace std;
void Selection_Sort(int a[],int size){
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
void Bubble_sort(int a[],int size){
    for(int i=0;i<size-1;i++){
         for(int j=0;j<(size-i);j++){
            if(a[j]>a[j+1]){
                swap(a[j],a[j+1]);
            }
         }
    }
}
void Insertion_sort(int a[],int size){
    for(int i=1;i<size;i++){
        int temp=a[i];
        int j;
        for( j=i-1;j>=0;j--){
            if(a[j]>temp){
                a[j+1]=a[j];
            }
            else{
                break;
            }
        }
        a[j+1]=temp;
    }
}
int main(){
    cout<<"Enter the size of array"<<endl;
    int size;
    cin>>size;
    int a[size];
    cout<<"Now enter the elements of array"<<endl;
    for(int i=0;i<size ; i++){
        cin>>a[i];
    }

    Selection_Sort(a,size);
    cout<<"Elements sorted according to Selection sort"<<endl;
    for(int i=0;i<size;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    cout<<"Enter the size of array"<<endl;
     size;
    cin>>size;
     a[size];
    cout<<"Now enter the elements of array"<<endl;
    for(int i=0;i<size ; i++){
        cin>>a[i];
    }

    Bubble_sort(a,size);
    cout<<"Elements sorted according to Bubble sort"<<endl;
    for(int i=0;i<size;i++){
        cout<<a[i]<<" ";
    }
       cout<<endl;
    cout<<"Enter the size of array"<<endl;
     size;
    cin>>size;
      a[size];
    cout<<"Now enter the elements of array"<<endl;
    for(int i=0;i<size ; i++){
        cin>>a[i];
    }

    Insertion_sort(a,size);
    cout<<"Elements sorted according to Insertion sort"<<endl;
    for(int i=0;i<size;i++){
        cout<<a[i]<<" ";
    }

}