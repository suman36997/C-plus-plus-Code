#include<iostream>
using namespace std;
class polynomial{
    int *degCoeff;
    int size;
    public:
    polynomial(){
        degCoeff=new int[5];
        size=5;
    }
    polynomial(polynomial &p){
        int *degcoeff1=new int[p.size];
        for(int i=0;i<p.size;i++){
            degcoeff1[i]=degCoeff[i];
        }
        size=p.size;
        }
    polynomial operator =(polynomial &p){
        int *degcoeff1=new int[p.size];
        for(int i=0;i<p.size;i++){
            degcoeff1[i]=degCoeff[i];
        }
        size=p.size;
    }
    void print(){
        for(int i=0;i<size;i++){
        cout<<degCoeff[i];
        }
    }
};