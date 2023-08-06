#include<iostream>
using namespace std;
int mult(int a,int b){
    if(b<=0){
        return 0;
    }
    return a+mult(a,b-1);

}
int main(){
    cout<<"Enter the value of multiplicand"<<endl;
    int a;
    cin>>a;
    cout<<"Enter the value of multiplier "<<endl;
    int b;
    cin>>b;
    int product=mult(a,b);
    cout<<"The product of two nos. is : "<<product<<endl;
}