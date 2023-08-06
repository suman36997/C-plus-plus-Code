#include<iostream>
using namespace std;
int countZeros(long int a){
    static int count=0;
    if(a==0){
        return 0 ; 
    }
    if(a%10==0){
        count++;
    }
    countZeros(a/10);
    return count;
}
int main(){
    cout<<"Enter a no. to count its zeros "<<endl;
     long int a;
    cin>>a;
    int count=countZeros(a);
    cout<<"The no. of zeros are "<<count<<endl;
}