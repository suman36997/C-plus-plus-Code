#include<iostream>
using namespace std;
void linear_search(int a[],int size,int key){
    for(int i=0;i<size;i++){
        if(key==a[i]){
           cout<<"key found at index "<<i<<" and the key is "<<a[i];
           break;
        }
    }
}
int main(){
    cout<<"Enter the size of array"<<endl;
    int size ;
    cin>>size;
    cout<<"Now enter the elements of array"<<endl;
    int a[size];
    for(int i=0;i<size;i++){
        cin>>a[i];
    }
    cout<<"Now enter which no. you want to search "<<endl;
    int key;
    cin>>key;
    linear_search(a,size,key);
}