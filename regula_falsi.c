#include<stdio.h>
#include<math.h>
float f(float x){
    return ((x*x*x)-(2*x)-5);
}
int main(){
    printf("Enter the value of xo,x1,e");
    float a,b,e,x;
    scanf("%f%f%f",&a,&b,&e);
    
    do{
        x=b-(b-a)/(f(b)-f(a))*f(b);
        if(f(b)*f(x)<0){
            b=x;

        }
        else{
            a=x;
        }
    }
    while(fabs(f(x)>e));
    printf("%f",x);
}