#include<iostream>
using namespace std;
int main(){
    cout<<"Enter the no. to reverse its digit"<<endl;
    int n;
    cin>>n;
    int rev_int=0;
    while(n>0){
        int rem=n%10;
        rev_int=(rev_int*10)+rem;
        n=n/10;
    
    }
    cout<<"The no. afer rev its digit is :"<<endl<<rev_int <<endl;
}
