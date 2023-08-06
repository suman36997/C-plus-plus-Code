#include<iostream>
using namespace std;
template<typename T, typename V>
class temp{
    public:
    T x;
    V y;
    void setX(T x){
        this->x=x;
    }
    void setY(V y){
        this->y=y;
    }
    T getX(){
        return x;
    }
    V getY(){
        return y;
    }
};
int main(){
    temp<int,double> p;
    p.setX(10);
    p.setY(20.34);
    cout<<"The value of x is "<<p.getX()<<endl<< "The value of y is  "<<p.getY()<<endl;
    temp<temp<int ,int >,double>p1;
    temp<int ,int>p2;
    p2.setX(15);
    p2.setY(16);
    p1.setX(p2);
    p1.setY(17.23);
    cout<<"The value of x of p2 is "<<p1.getX().getX()<<endl<<"The value of y of p2 "<<p1.getX().getY()<<endl;
    cout<<"The value of y of p1 is "<<p1.getY();
   

}

