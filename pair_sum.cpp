#include<iostream>
using namespace std;
void pair_sum(int a[],int size,int sum){
    
    for(int i=0;i<size;i++){
        
    for( int j=i+1;j<size;j++){
        if(a[i]+a[j]==sum){
            cout<<"pair  are "<<a[i]<<" "<<a[j]<<endl;
        }
    }
        
    }
}
int main(){
    cout<<"Enter the size of array"<<endl;
    int size;
    cin>>size;
    cout<<"Enter the elements of array"<<endl;
    int a[size];
    for(int i=0;i<size ; i++){
        cin>>a[i];
    }
    
    cout<<"Enter the value of sum "<<endl;
    int sum;
    cin>>sum;
    pair_sum(a,size,sum);
}