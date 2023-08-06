#include<iostream>
using namespace std;
int partition(int a[],int s,int e){
    int index=0;

    for(int i=s+1;i<=e;i++){
        if(a[s]>=a[i]){
            index++;
        }
    }

    swap(a[s],a[s+index]);
    int i=s;
    int j=e;
    int k=s+index;
    while(i<k && j>k){
        while(a[i]<a[k]){
            i++;
        }
        while(a[j]>a[k]){
            j--;
        }
        if(i<k && j>k){
            swap(a[i++],a[j--]);
        }
    }
    return k;
    
    
}
void quickSort(int *a,int s,int e){
    if(s>=e){
        return ;
    }
    int index=partition(a,s,e);
    
    quickSort(a,s,index-1);
    quickSort(a,index+1,e);
}
int main(){
    cout<<"Enter the size of array "<<endl;
    int n;
    cin>>n;
    int *a=new int[n];
    cout<<"Now enter the elements of array "<<endl;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    quickSort(a,0,n-1);
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}
