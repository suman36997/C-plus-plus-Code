#include<iostream>
using namespace std;
bool binarySearch(int a[][4],int target,int row , int col){
    int s=0;
    int e=row*col-1;
   
    while(s<=e){
         int mid=(s+e)/2;
        int element=a[mid/col][mid%col];
        if(element==target){
            return mid;
        }
        else if(target>element){
            s=mid+1;
        }
        else{
            e=mid-1;
        }
    }
    return 0;
    
}
int main(){
    int a[3][4]={{1,2,3,4},{9,10,11,12},{18,19,20,21}};
    cout<<"Enter the element you want to search"<<endl;
    int element ;
    cin>>element;
    cout<<"your element found at index"<<endl;
    int index=binarySearch(a,element,3,4);
    cout<<index;
}