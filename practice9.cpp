#include<iostream>
using namespace std;
int partition(int *a,int s ,int e){
    int index=0;
    for(int i=1;i<=e;i++){
        if(a[s]>a[i]){
            index++;
            }
    }
    swap(a[s],a[s+index]);
    int i=s;
    int j=e;
    int k=a[s+index];
    while(i<j){
        while(a[i]<k){
            i++;
        }
        while(a[j]>k){
            j--;
        }
        swap(a[i],a[j]);
    }
    return index;
}
void Quicksort(int *a,int s,int e){
    if(s>=e){
        return ;
    }
    int index=partition(a,s,e);
    Quicksort(a,s,index-1);
    Quicksort(a,index+1,e);
}
int main(){
    cout<<"Enter the size of array "<<endl;
    int n;
    cin>>n;
    cout<<"Enter the elements of array "<<endl;
    int *a=new int[n];
    for(int i=0;i<n;i++){ 
        cin>>a[i];
    }
    Quicksort(a,0,n-1);
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}
