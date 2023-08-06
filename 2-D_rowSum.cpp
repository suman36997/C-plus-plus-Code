#include<iostream>
#include<vector>
using namespace std;
void row_sum(int  a[][4],int m,int n){
 
    int maxi=0;
 for(int i=0;i<m;i++){
    int sum=0;
    for(int j=0;j<n;j++){
        sum = sum+a[i][j];
        if(maxi<sum){
            maxi=sum;
        }
    }
    cout<<sum<<" ";
    
    cout<<endl;
 } 
 cout<<"The largest sum of row is "<<maxi<<endl;
 
}
int main(){
    int a[3][4];
    cout<<"Enter the elements "<<endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cin>>a[i][j];
        }
    }
    row_sum(a,3,4);
}