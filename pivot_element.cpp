#include<iostream>
using namespace std;
int pivot_element(int a[],int size){
    int s=0;
    int e=size-1;
    while(s<e){
        int mid=(s+e)/2;
        if(a[0]<=a[mid]){
            s=mid+1;
        }
        else{
            e=mid;
        }
    }
    return s;
}
int main()
{
    cout<<"Enter the size of array"<<endl;
    int size;
    cin>>size;
       cout<<"Now enter the elements of array"<<endl;
    int a[size];
    for(int i=0;i<size;i++){
        cin>>a[i];
    }
    cout<<"Required pivot element is at index  "<<pivot_element(a,size);
}