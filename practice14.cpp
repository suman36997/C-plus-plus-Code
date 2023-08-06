#include<iostream>
using namespace std;
void shift(int a[],int n){
    int non_zero=0;
    for(int i=0;i<n;i++){
        if(a[i]!=0){
            swap(a[non_zero],a[i]);
            non_zero++;
        }
    }
}
int main(){
    int arr[8]={3,0,4,2,0,5,8,0};
    shift(arr,8);
    cout<<"Shifting of zeros to the right position "<<endl;
    for(int i=0;i<8;i++){
        cout<<arr[i]<<" ";
    }
}