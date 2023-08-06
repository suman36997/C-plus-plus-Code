#include<stdio.h>
#include<math.h>
#define f(x) ((x*x*x)-x-4)
#define g(x) (3* (x*x)-1)
int main(){
    printf("Enter the value of xo,e\n");
    float xo,e,x1;
    scanf("%f%f",&xo,&e);
    
    do{
        x1=xo-(f(xo)/g(xo));
        xo=x1;        
    }
    while(fabs(f(x1))>e);
    printf("%f",x1);
}