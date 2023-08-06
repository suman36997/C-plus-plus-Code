#include<iostream>
using namespace std;
void merge2sorted_array(int a[],int m,int b[],int n,int c[]){
    int i=0;
    int j=0;
    int k=0;
        while(i<m && j<n){
        if(a[i]<b[j]){
            c[k++]=a[i++];
            // k++;
            // i++;
        }
        else if (a[i]>b[j]){
            c[k++]=b[j++];
            // k++;
            // j++;
            
        }
        }

       while (i<m){
            c[k++]=a[i++];
            // k++;
            // i++;
            
        }
        while (j<n){
            c[k++]=b[j++];
            // k++;
            // j++;
            
        }
    
}
int main(){
    int arr1[5]={3,5,7,9,10};
    int arr2[3]={2,4,8};
    int arr3[8]={0};
    merge2sorted_array(arr1,5,arr2,3,arr3);
    for(int i=0;i<8;i++){
        cout<<arr3[i]<<" ";
    }
}