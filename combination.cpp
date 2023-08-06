#include<iostream>
using namespace std;
int fact(int n){
    // int fac=1;
    // for (int  i = 1; i <=n; i++)
    // {
    //     fac=fac*i;
    // }
    // return fac;
    if(n==0||n==1){
        return 1;
    }
    return (n*fact(n-1 ));
    
}
int combination(int n, int r){
    int num=fact(n);
    int deno=fact(r)*fact(n-r);
    return (num/deno);
}
int main()

{
    cout<<"Enter the value of n & r to find its combination"<<endl;
    int n,r;
    cin>>n>>r;
    int comb=combination(n,r);
    cout<<comb;

}