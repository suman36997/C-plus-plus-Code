#include<iostream>
#include<vector>
using namespace std;
int countPrime(int n){
    int count=0;
    vector<bool>prime(n+1,true);
    prime[0]=prime[1]=0;
    for(int i=2;i<n;i++){
        if(prime[i]){
            count++;
        }
        for(int j=2*i;j<n;j+=i){
            prime[j]=0;
        }
    }
    return count;
   
}
int main(){
    cout<<"Enter the no. to count the no. of prime at that no."<<endl;
    int a;
    cin>>a;
    int count =countPrime(a);
    cout<<"Required count of prime no. at that no. is   "<<count<<endl;
}
