#include<iostream>
using namespace std;
int unique_element(int a[],int size){
    int element=0;
    for(int i=0;i<size;i++){
        element=element^a[i];
    }
    return element;
}

int main(){
    cout<<"Enter the size of array"<<endl;
    int size ;
    cin>>size;
    int a[size];
    cout<<"Now enter the elements of array"<<endl;
    for(int i=0;i<size;i++){
        cin>>a[i];
    }
    int element=unique_element(a,size);
    cout<<"The unique element is: " <<element<<endl;
}