#include<iostream>
using namespace std;
int pivot_element(int a[],int size){
    int s= 0;
    int e=size-1;
    while(s<e){
        int mid=(s+e)/2;
        if(a[mid]>a[0]){
            s=mid+1;
        }
        else{
            e=mid;
        }
    }
    return s;
}
int binary_search(int a[],int size,int key,int start,int end){
     start=0;
     end=size-1;
    while(start<=end){
        int mid=(start+end)/2;
        if(a[mid]==key){
            return mid;
        }
        else if(key<a[mid]){
            end=mid-1;
        }
        else{
            start=mid+1;
        }
    }
    return -1;
}
int target_element(int a[],int size,int key){
    
    int pivot=pivot_element( a, size);
    if(key>=a[pivot]&& key<=a[size-1]){
        return binary_search(a,size,key,pivot,size-1);
    }
    else{
        return binary_search(a,size,key,0,pivot-1);
    }
}
int main(){
    cout<<"Enter the size of array "<<endl;
    int size;
    cin>>size;
    cout<<"Enter the elements of array"<<endl;
    int a[size];
    for(int i=0;i<size;i++){
        cin>>a[i];
    }
    cout<<"Enter which element you want to find in rotated array"<<endl;
    int key;
    cin>>key;
    int index=target_element(a,size,key);
    cout<<"your element is at index "<<index<<endl;

}