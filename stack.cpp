#include<iostream>
using namespace std;
const int MAX=10;

class Stack{
    public:
     int top=-1;
     int arr[MAX];
    void push(int data){
        if(top==MAX-1){
            cout<<"Stack is full"<<endl;

        }
        else{
            top++;
            arr[top]=data;
        }
    }
    void pop(){
        if(top==-1){
            cout<<"pop not possible"<<endl;
        }
        else{
            cout<<"poped element is "<<arr[top]<<endl;
            top--;
        }
    }
    void peek(){
        cout<<"Your peek element is "<<arr[top]<<endl;
    }
    void empty(){
        if(top==-1){
            cout<<"your stack is empty"<<endl;
        }
        else{
            cout<<"Your stack is not empty"<<endl;
        }
    }

};
int main(){
    
    Stack s;
    s.empty();
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(4);
    s.peek();
    s.pop();
    s.pop();
    s.pop();
    s.empty();

    s.pop();
    s.empty();
}
