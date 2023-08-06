#include<iostream>
using namespace std;
void saydigit(string arr[],int n){
    if(n==0){
        return ;
    }
    int digit=n%10;
    n=n/10;
    saydigit(arr,n);
    cout<<arr[digit]<<" ";
}
int main(){
    cout<<"Enter the value of n "<<endl;
    int n;
    cin>>n;
    string arr[10]={"zero","one","Two","Three","Four",
    "Five","Six","Seven","Eight","Nine"};
    saydigit(arr,n);
}