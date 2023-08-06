#include<iostream>
using namespace std;
int get_max(int a[],int size){
    int maxi= INT16_MIN;
    for(int i=0;i<size;i++){
        // maxi=max(a[i],maxi);
        if(maxi<a[i]){
            maxi=a[i];
        }
    }
    return maxi;
}
int get_min(int a[],int size){
    int mini=INT16_MAX;
    for (int  i = 0; i < size; i++)
    {
        if(mini>a[i])
        // mini=min(a[i],mini);
        mini=a[i];
    }
    return mini;
}
int main(){
    cout<<"Enter the size of array"<<endl;
    int n;
    cin>>n;
    int a[100];
    for(int i=0;i<n;i++){
        cin>>a[i]; 
    }
    int min=get_min(a, n);
    int max=get_max(a, n);
    cout<<"The min no. is "<<min<<endl;
    cout<<"The max no. is "<<max<<endl;
}
