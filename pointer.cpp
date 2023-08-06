#include<iostream>
using namespace std;
void area_peri(int r,float *p,float *a){
    *a=3.14*(r)*r;
    *p=2*3.14*r;
}
int main(){
    cout<<"Enter the value of radius "<<endl;
    int r;
    cin>>r;
    float p=0;
    float a=0;
    area_peri(r,&p,&a);
    cout<<p<<" "<<a<<endl;
}