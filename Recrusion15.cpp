#include<iostream>
using namespace std;
int countDigit(int a){
     int count=0;
    if(a==0){
        return 0;
    }
    if(a%10!=0){
        count++;
    }
    a=a/10;
    return count+countDigit(a);

}
int main(){
    cout<<"Enter the no. to count its digit "<<endl;
    int a;
    cin>>a;
    cout<<"The no. of digit is "<<endl;
    cout<<countDigit(a);
}