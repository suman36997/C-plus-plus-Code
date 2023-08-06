#include<iostream>
using namespace std;
int  binary_search(int a[],int size,int key){
    int start=0;
    int end=size-1;
    
    while(start<=end){
        int mid=(start+end)/2;
        if(key==a[mid]){
            return mid;
         
        }
        else if(key>a[mid]){
            start=mid+1;
        }
        else{
            end=mid-1;
        }

    }
    return -1;
}
int main(){
    cout<<"Enter the size of array "<<endl;
    int size;
    cin>>size;
    int a[size];
    cout<<"Now enter the elements of array"<<endl;
    for(int i=0;i<size;i++){
        cin>>a[i];
    }
    cout<<"Enter which no. you want to search " << endl;
    int key;
    cin>>key;
    
    int index=binary_search(a,size,key);
    cout<<"Number found at index "<<endl<<index;


}