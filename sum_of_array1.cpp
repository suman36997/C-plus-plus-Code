#include<iostream>
#include<vector>
using namespace std;
vector<int> reverse(vector<int> a){
int s=0;
int e=a.size()-1;
while(s<=e){
    swap(a[s],a[e]);
    s++;
    e--;
}
return a;
}
vector <int> sum_of_array(vector<int> &a ,int m, vector<int>&b , int n){
    int i=m-1;
    int j=n-1;
   vector <int> c;
   int carry=0;
   int sum=0;
   while(i>=0 && j>=0){
     sum=a[i]+b[j]+carry;
    carry=sum/10;
    sum=sum%10;
    c.push_back(sum);
    i--;
    j--;
   }
    while(i>=0){

     sum=a[i]+carry;
    carry=sum/10;
    sum=sum%10;
    c.push_back(sum);
    i--;
    
    }
    while(j>=0){ 
    sum=b[j]+carry;
    carry=sum/10;
    sum=sum%10;
    c.push_back(sum);
   
    j--;
   }
   while(carry!=0){
    sum=carry;
    carry=sum/10;
    sum=sum%10;
    c.push_back(sum);

   }
   
   return reverse(c);
   

   }
   int main(){
    vector <int> a = { 2,4,5,6,8,9};
    vector <int> b={3,5,7,2};
    vector <int> c= sum_of_array(a,6,b,4);
    cout<<"your first array is "<<endl;
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    
    }
    cout<<endl;
     cout<<"your secoand array is "<<endl;
    for(int i=0;i<b.size();i++){
        cout<<b[i]<<" ";
    }
    cout<<endl;
    
    
    for(int i=0;i<a.size();i++){
        cout<<c[i]<<" ";
    }
   
   }

   