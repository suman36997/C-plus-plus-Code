#include<iostream>
using namespace std;
int sum_of_array(int a[],int size){
    int sum=0;
    for(int i=0;i<size;i++){
        sum=sum+a[i];
    }
    return sum;
}
int main(){
   cout<<"Enter the size of array"<<endl;
   int n;
   cin>>n;
   int a[n];
   for(int i=0;i<n;i++){
    cin>>a[i];
   } 
    int sum=sum_of_array(a,n);
    cout<<"The sum of these no. are : "<<endl<<sum;
}

