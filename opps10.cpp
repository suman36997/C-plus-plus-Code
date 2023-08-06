#include<iostream>
using namespace std;
class base{
    public:
    base(){
        cout<<"Base class constructor called"<<endl;
    }
     void fun(){
        cout<<"In function of base class"<<endl;
    }
    virtual void fun2(){
        cout<<"In virtual function of base class"<<endl;
    }
    
};
class derived:public base{
    public:
    derived(){
        cout<<"Derived class constructor called"<<endl;
    }
    void fun(){
        cout<<"In function of derived class"<<endl;
    }
    void fun2(){
        cout<<"In function of derived class which is virtual in base"<<endl;
    }

};
int main(){
    derived d;
    d.fun();
    d.fun2();
    base *p;
    p=&d;
    p->fun2();
    p->fun();//fun() of base class called because it is not a virtual fun.
}