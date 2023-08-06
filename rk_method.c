#include<stdio.h>
#define f(x,y) ((y-x)/(y+x))
int main(){
    printf("Enter the value of xo,yo,h,z");
    float xo,yo,h,z;
    scanf("%f%f%f%f",&xo,&yo,&h,&z);
    float k,k1,k2,k3,k4;
    do{
        k1=h*f(xo,yo);
        k2=h*f(xo+(h/2),yo+(k1/2));
        k3=h*f(xo+(h/2),(yo+k2/2));
        k4=h*f(xo+h,yo+k3);
        k=(1/6.0)*(k1+(2*k2)+(2*k3)+k4);
        xo=xo+h;
        yo=yo+k;
    }
    while(xo<z);
    
    printf("%f",yo);
    
}