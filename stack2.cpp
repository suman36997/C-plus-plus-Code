#include<iostream>
using namespace std;
class stack{
    private:
    int *arr;
    int top1;
    int top2;
    int size;
    public:
    
    stack(int size){
        this->size=size;
        arr=new int[size];
        top1=-1;
        top2=size;
    }
    void push1(int element){
        if(top1==size-1){
            cout<<"Stack Overflow"<<endl;
        }
        else{
            top1++;
            arr[top1]=element;
        }
    }
    void push2(int element){
        if(top2==-1){
            cout<<"Stack Overflow"<<endl;
        }
        else{
            top2--;
            arr[top2]=element;
        }
    }
    void pop1(){
        if(top1==-1){
            cout<<"Stack underflow"<<endl;
        }
        else{
            cout<<"Popped element"<<arr[top1]<<endl;
            top1--;
        }
    }
    void pop2(){
        if(top2==size){
            cout<<"Stack underflow"<<endl;
        }
        else{
            cout<<"Popped element"<<arr[top2]<<endl;
            top2++;
        }
    }

};
int main(){
    stack s(18);
    s.push1(10);
    s.push1(20);
    s.push1(60);
    s.push2(30);
    s.push2(40);
    s.push2(50);
    s.pop1();
    s.pop1();
    s.pop1();
    s.pop1();
    s.pop2();
    s.pop2();
    s.pop2();
    s.pop2();




}
