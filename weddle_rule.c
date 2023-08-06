#include<stdio.h>
#include<math.h>
#define f(x)  log(x)
int main(){
    printf("Enter the value of xo,yo,n");
    float a,b,n;
    scanf("%f%f%f",&a,&b,&n);
    float h=(b-a)/n;
    float s=0;
    for(int i=0;i<=(n-6);i+=6){
         s=s+(3*h)/10*(f(a+i*h)+5*f(a+(i+1)*h)+f(a+(i+2)*h)+6*f(a+(i+3)*h)+f(a+(i+4)*h)+5*f(a+(i+4)*h)+f(a+(i+5)*h));

    }
    printf("%f",s);
}