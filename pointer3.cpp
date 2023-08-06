#include<iostream>
#include<math.h>
using namespace std;
void fun(int n1,int n2,int n3,int n4,int n5,float *s,float *avg,float *sd){
    *s=(n1+n2+n3+n4+n5);
    *avg=(n1+n2+n3+n4+n5)/5;
    *sd=sqrt((pow((n1-*avg),2)+pow((n2-*avg),2)+pow((n3-*avg),2)+pow((n4-*avg),2)+pow((n5-*avg),2))/4);
}
int main(){
    cout<<"Enter five nos."<<endl;
    int n1,n2,n3,n4,n5;
    cin>>n1>>n2>>n3>>n4>>n5;
    float s,avg,sd;
    fun(n1,n2,n3,n4,n5,&s,&avg,&sd);
    cout<<"The sum of five nos. are : "<<s<<endl;
    cout<<"The average of five nos. are : "<<avg<<endl;
    cout<<"The standard deviation of five nos. are : "<<sd<<endl;

}