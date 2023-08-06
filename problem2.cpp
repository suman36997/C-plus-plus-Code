#include<iostream>
using namespace std;
int complement(int n){
    int mask=0;
    int m=n;
    if(n==0){
        return 1;
    }
    while(m!=0){
        mask=(mask<<1)|1;
        m=m>>1;
    }
    int ans=(~n)&mask;
    return ans;
}
int main(){
    cout<<"Enter a no. to find its bitwise complement "<<endl;
    int n;
    cin>>n;
    int comp=complement(n);
    cout<<"Requred bitwise complement is : "<<endl<<comp;

}