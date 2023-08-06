#include<iostream>
using namespace std;
int square_root(int n){
    int start=0;
    int end=n;
    int ans;
    while(start<=end){
        int mid=(start+end)/2;
        if((mid*mid)>n){
            end=mid-1;
        }
        else if((mid*mid)<n){
            ans=mid;
            start=mid+1;
        }
        else if(mid==n){
            return mid;
        }
        
    }
    return ans;
}
double more_precison(int n,int tempsol,int precison){
    double factor=1;
    double ans=tempsol;
    for(int i=0;i<precison;i++){
        factor=factor/10;
        for(double j=ans;j*j<n;j=j+factor){
            ans=j;
        }
    }
    return ans;
}
int main(){
    
    cout<<"Enter the no. whom you want to find the square root"<<endl;
    int n;
    cin>>n;
   
    int tempsol=square_root(n);
   cout<<"How much precison you wants "<<endl;
    int precison ;
    cin>>precison;
  
    cout<<"The square root of "<< n <<" is "<<more_precison(n,tempsol,precison)<<endl;
}