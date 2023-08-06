#include<iostream>
using namespace std;
int main(){
   
    cout<<"Enter the no."<<endl;
     int a;
    cin>>a;
    if(a>0)
    {
        cout<<"The no. is positive "<<endl;
    }
    else if (a==0){
        cout<<"The no. is zero"<<endl;
    }
    else{
        cout << "The no. is negative"<<endl;
    }
}