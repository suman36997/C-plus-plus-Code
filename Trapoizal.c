#include<stdio.h>
#include<conio.h>
#define f(x) ((x*x)/(1+x*x))
int main(){
    printf("Enter the value of a,b,n\n");
    float a,b,n,s,h;
    scanf("%f%f%f",&a,&b,&n);
    s=0;
    h=(b-a)/n;
    
    for(int i=1;i<(n-1);i++){
        s=s+f(a+i*h);
    }
    float t;
    t=(h/2.0)*(f(a)+f(b)+2*s);
    printf("Required value of integeration using simpsons rule is : %f",t);
}