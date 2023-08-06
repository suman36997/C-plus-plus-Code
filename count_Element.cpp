#include<iostream>
using namespace std;
int left_occur(int a[],int size,int key)
{
    int s=0;
    int e=size-1;
    int ans=-1;
    while(s<=e){
       int  mid=(s+e)/2;
       if(key==a[mid]){
        ans=mid;
        e=mid-1;
       }
       else if(key>a[mid]){
        s=mid+1;
       }
       else{
        e=mid-1;
       }
    }
    return ans;
}
int Right_occur(int a[],int size,int key){
    int start=0;
    int end=size-1;
    int ans=-1;
    while(start<=end){
        int mid=(start+end)/2;
        if(key==a[mid]){
            ans=mid;
            start=mid+1;
        }
        else if(key<a[mid]){
            end=mid-1;
        }
        else{
            start=mid+1;
        }
    }
    return ans;
}
int main(){
    cout<<"Enter the size of array"<<endl;
    int size;
    cin>>size;
    cout<<"Now enter the elements of array"<<endl;
    int a[size];
    for(int i=0;i<size;i++){
        cin>>a[i];
    }
    cout<<"Enter the elements whom you want to find its repeatation"<<endl;
    int key;
    cin>>key;
    int repeat=Right_occur(a,size,key)-left_occur(a,size,key)+1;
    int right,left;
    right=Right_occur(a,size,key);
    left=left_occur(a,size,key);
    cout<<"Right occour"<<right<<endl;
    cout<<"left occour"<<left<<endl;
    cout<<"The no. of occurance of "<< key<< " is " <<repeat;

}