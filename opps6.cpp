#include<iostream>
using namespace std;
class fraction{
    int num;
    int den;
    public:
    fraction(int x,int y){
        num=x;
        den=y;
    }
    void simplify(){
        int a=1;
        int j=min(this->num,this->den);
        for(int i=1;i<=j;i++){
            if(this->num%i==0 && this->den%i==0){
                a=i;
            }

        }
        this->num=this->num/a;
        this->den=this->den/a;
       
    }
    fraction operator +(fraction const &f){
        int denominator=(this->den)* (f.den);
        int sum=((denominator/this->den)*this->num )+((denominator/f.den)*f.num);
        num=sum;
        den=denominator;
        fraction f1(num,den);
        f1.simplify();
        return f1;

    }
    fraction operator *(fraction f){
        num=this->num*f.num;
        den=this->den*f.den;
        fraction f2(num,den);
        f2.simplify();
        return f2;
        
    }
    // pre increment operator
    fraction &operator ++(){
         num=(den/1)*1 + num;
        // fraction f2(num,den);

        return  *this;
        
    }
    // post increment oprator
    fraction operator++(int){
        fraction fnew(num,den);
        num=num+den;
        return fnew;
    }
    fraction &operator+=(fraction f){
        int deno = den*f.den;
        int sum=((deno/den)*num)+((deno/f.den)*f.num);
        num=sum;
        den=deno;
        return *this;

    }
    void display(){
        cout<<this->num<<" / "<<this->den<<endl;
    }

};
int main(){
    fraction f1(4 ,6);
    fraction f2(4,10);
    fraction f3=f1+f2;
    f3.display();
    fraction f4=f1*f2;
    f4.display();
    fraction f5=++(++f4);
    f4.display();
    f5.display();
    fraction f8(2,3);
    fraction f6=f8++;
    f8.display();
    f6.display();
    fraction f9(1,2);
    fraction f10(2,3);
    f9+=f10;
    f9.display();
    
    
}