#include<iostream>
#include<math.h>
using namespace std;
int decimal_to_binary(int n){
    int ans=0;
    
    int count=0;
    while(n!=0){
         int last_bit=(n&1);
        ans=(last_bit*pow(10,count))+ans;
        
        count++;
        n=n>>1;
    }
    return ans;
}

int binary_to_gray(int binary,int count){
    
    // int binary=decimal_to_binary(n);
    // count=0;
    // while(binary!=0){
    //     binary=binary/10;
    //     count++;
    // }
    
    int a=pow(10,count);
    int first_digit=(binary & a);
    int ans=first_digit;
    int c;
    while(binary!=0){

        binary=binary<<1;
       int b=pow(10,count-1);

        int msb=b&binary;
        int c=c^(ans^msb);
        count--;}
    return c;

}
int main(){
    cout<<"Enter a no. and its count to convert it into graycode"<<endl;
    int n,count;
    cin>>n>>count;
    
    
    cout<<"Number in graycode "<<binary_to_gray(n,count);

}