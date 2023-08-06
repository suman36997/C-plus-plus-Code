#include<iostream>
#include<math.h>
using namespace std;
int binary_to_decimal(int n){
    int ans=0;
    int count=0;
    while(n!=0){
        int bit=n%10;
        if(bit==1){
        ans=ans+pow(2,count);

        }
        
        count++;
        n=n/10;
    }
    return ans;
    

}
int main(){
    cout<<"Enter a no. "<<endl;
    int n;
    cin>>n;
    int decimal=binary_to_decimal(n);
    cout<<"Number in decimal "<<endl<<decimal;
}