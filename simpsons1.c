#include<stdio.h>

float f(float x){
    return (1/(1+(x*x)));
}
int main(){
    printf("Enter the value of a,b,n\n");
    float a,b,n;
    scanf("%f%f%f",&a,&b,&n);
    float h=(b-a)/n;
    // float s=0;
    // for(int i=0;i<=(n-2);i+=2){
    //     s=s+((h/3.0)*(f(a+(i*h))+4*(f(a+(i+1)*h))+f(a+(i+2)*h)));
    // }
    float s=0;
    for(int i=1;i<=(n-1);i+=2){
        s=s+f(a+(i*h));
    }
    float s1=0;
    for(int i=2;i<=(n-2);i+=2){
        s1=s1+f(a+(i*h));
    }
    float t;
    t=(h/3.0)*(f(a)+f(b)+(4*s)+(2*s1));
    printf("Required value of integration using simpsons is %f",t);
}