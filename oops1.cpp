#include<iostream>
using namespace std;
class fraction{
    int numerator;
    int denominator;
    public:
    fraction(int numerator,int denominator){
        this->numerator=numerator;
        this->denominator=denominator;
    }
    void display(){
        cout<<"The fraction is : "<<numerator<<"/"<<denominator<<endl;
    }
    void add(fraction const &f2){
        int lcm=denominator*f2.denominator;
        int sum=((lcm/denominator)*numerator)+((lcm/f2.denominator)*(f2.numerator));
        numerator=sum;
        denominator=lcm;
    }
    void simplify(){
        int hcf=1;
        int j=min(this->numerator,this->denominator);
        for(int i=1;i<=j;i++){
            if(this->numerator%i==0&&this->denominator%i==0){
                hcf=i;
            }
        }
        this->numerator=this->numerator/hcf;
        this->denominator=this->denominator/hcf;
    }
    // const keyword lagane se f2 ka aise change nhi hoga
    void multiply(fraction const & f2){
       numerator=(this->numerator)*(f2.numerator);
       denominator=(this->denominator)*(f2.denominator);
       simplify();
    }
};
int main(){
    fraction f1(10,2);
    f1.display();
    fraction f2(40,2);
    f2.display();
    // f1.add(f2);
    // f1.display();
    // f1.simplify();
    // f1.display();
    f1.multiply(f2);
    
    f1.display();
}
