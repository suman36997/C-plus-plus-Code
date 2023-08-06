#include<iostream>
using namespace std;
int product_of_digit(int n){
    int product=1;
    while(n!=0){
        int rem=n%10;
        product=product*rem;
        n=n/10;
    }
    return product ;
}
int sum_of_digit(int n){
    int sum=0;
    while(n!=0){
        int rem=n%10;
        sum=sum+rem;
        n=n/10;
    }
    return sum;
}
int main(){
    cout<<"Enter the no."<<endl;
    int n;
    cin>>n;
    int p=product_of_digit(n);
    int s=sum_of_digit(n);
    cout<<"The difference of product and sum of digit"<<endl<<(p-s);


}