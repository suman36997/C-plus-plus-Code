#include<iostream>
#include<string.h>
using namespace std;
class student{
    
    
    public:
    char *name;
    int age;
    
    student(student const &s){
        this->age=s.age;
        this->name=new char[strlen(s.name)+1];
        strcpy(this->name,name);
    }
    void display(){
        cout<<name<<" "<<age;
    }
};
int main(){  
student s1(student s2);
s1.age=20;
s1.name="abcd";



}