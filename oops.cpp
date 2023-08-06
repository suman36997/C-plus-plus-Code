#include<iostream>
using namespace std;
class student{
    public:
    int roll;   
    private:
    int age;
    public:
    void setage(int a){
        age=a;
    }
    void getdata(){
        cout<<roll<<endl;
        cout<<age<<endl;
    }
};
int main(){
    student s1;
    student *s2=new student;
    s1.roll=101;
    s1.setage(20);
    s1.getdata();
    (*s2).roll=102;
    s2->setage(21);
    s2->getdata();
}