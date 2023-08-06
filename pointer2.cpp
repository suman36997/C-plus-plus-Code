#include<iostream>
using namespace std;
void result(int sub1,int sub2,int sub3,float *avg,float *per){
    *avg=(sub1+sub2+sub3)/3;
    *per=((sub1+sub2+sub3)/300)*100;
}
int main(){
    cout<<"Enter the marks obtained by student"<<endl;
    int m1,m2,m3;
    cin>>m1>>m2>>m3;
    float avg,per;
    result(m1,m2,m3,&avg,&per);
    cout<<" Average marks of the student is : "<<avg<<endl;
    cout<<" Percentage marks of the student is : "<<per<<endl;
}