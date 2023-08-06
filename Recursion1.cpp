#include<iostream>
using namespace std;
int getSum(int *arr,int size){
    if(size==0){
        return 0;
    }
    if(size==1){
        return arr[0];
    }
    int sum=arr[0]+getSum(arr+1,size-1);
    return sum;

}
int main(){
    cout<<"Enter the size of array "<<endl;
    int n;
    cin>>n;
    int *arr=new int[n];
    cout<<"Now enter the elements of array "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    // int arr[5]={1,2,3,4,5};
    int sum=getSum(arr,n);
    cout<<"The sum of array using recursion is "<<endl;
    cout<<sum<<endl;
}