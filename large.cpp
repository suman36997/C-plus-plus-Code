#include<iostream>
using namespace std;
void large_no(int a , int b , int c ){
    if (a>c)
    {
        if(a>b){
            cout<<a <<" is greater "<<endl;
        }
        
    }
    else{
        if(b>c){
            cout<<b <<" is greater "<<endl;
        }
        else{
            cout<<c <<" is greater "<<endl;

        }
    }
    
}
int main(){
    cout<<"Enter three no. "<<endl;
    int x , y , z ;
    cin>>x>>y>>z;
    large_no(x,y,z);
}