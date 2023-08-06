#include<iostream>
using namespace std;
bool search(int *a,int size,int element){
   if(size==0){
      return false;
   }
   
   if(*a==element){
      return true;
   }
    search(a+1,size-1,element);

   
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
   cout<<"Enter the element you want to search "<<endl;
   int element;
   cin>>element;
   int b=search(a,n,element);
   if(b){
      cout<<"Element found "<<endl;
   }
   else{
      cout<<"Element not found"<<endl;
   }
}