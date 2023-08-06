#include<iostream>
using namespace std;
class complex{
    int real;
    int img;
    public:
    complex(int r,int i){
        real=r;
        img=i;
    }
    void print(){
        cout<<real<<"+"<<img<<"i"<<endl;
    }
    void add(complex const &f2){
        real=real+f2.real;
        img=img+f2.img;
    }
    void multiply(complex const &f2){
        real=real*f2.real;
        img=img*f2.img;
    }
};
int main(){
    int real1,real2,img1,img2;
    cout<<"Enter the real and img part of first obj"<<endl;
    cin>>real1>>img1;
    cin>>real2>>img2;
    complex f1(real1,img1);
    complex f2(real2,img2);
    cout<<"Enter your choice"<<endl<<"press 1 for multiply"<<endl<<"press 2 for add"<<endl;
    int choose;
    cin>>choose;
    
    if(choose==1){
        cout<<"After multiplication"<<endl;
        f1.multiply(f2);
        f1.print();
    }
    else if(choose==2){
        cout<<"After addition"<<endl;
        f1.add(f2);
         f1.print();
    }
    
    
}