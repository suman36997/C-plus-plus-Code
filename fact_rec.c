#include<stdio.h>
#include<conio.h>
int fact(int );
int main(){
    printf("Enter the no. for factorial\n");
    int a;
    scanf("%d",&a);
    int fac=fact(a);
    printf("Required factorial : %d",fac);
}
int fact(int y){
    if( y==1 || y==0){
        return 1;

    }
    else
    return y*fact(y-1);
}