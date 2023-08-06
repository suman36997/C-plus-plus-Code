#include<iostream>
using namespace std;
void duplicate_element(int a[],int size){
    for(int i=0;i<size ; i++){
        for(int j=i+1;j<size ; j++){
            if(a[i]==a[j]){
                cout<< a[j]<<" ";
                break;
            }
            
        }
    }
}
int main(){
    cout<<"Enter the size of array"<<endl;
    int size ;
    cin>>size;
    int a[size];
    for(int i=0;i<size;i++){
        cin>>a[i];
    }
    cout<<"Duplicate elements are :"<<endl;

        duplicate_element(a,size);
    
}