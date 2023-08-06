#include<iostream>
using namespace std;
class B1{
    public:
    void display(){
        cout<<"class B1"<<endl;
    }
    B1(){
        cout<<"Class B1 constructor"<<endl;
    }
    ~B1(){
        cout<<"Class B1 destructor"<<endl;
    }
};
class B2{
    public:
    void display(){
        cout<<"class B2"<<endl;
    }
    B2(){
        cout<<"class B2 constructor"<<endl;
    }
    ~B2(){
        cout<<"Class B2 destructor"<<endl;
    }
};
class D:public B2,public B1{
    public:
    D(){
        cout<<"Class D constructor"<<endl;
    }
    ~D(){
        cout<<"Class D destructor"<<endl;
    }
};
int main(){
    D d1;

}