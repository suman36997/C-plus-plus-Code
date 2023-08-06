#include<stdio.h>
#include<conio.h>
#define f(x,y)  (x-y)
int main(){
    printf("Enter the value of xo,yo,h,z\n");
    float xo,yo,h,z;
    scanf("%f%f%f%f",&xo,&yo,&h,&z);
    int n=(z-xo)/h;
    float x=xo;
    float y=yo;
    for(int i=0;i<n;i++){
        y=y+h*f(x,y);
        x=x+h;
    }
    printf("%f",y);
}