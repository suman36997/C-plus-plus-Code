#include<stdio.h>
#include<conio.h>
void arpr(int , float * , float *);
int main(){

    printf("Enter the radius of circle\n");
    int r;
    float area,pr;
    scanf("%d",&r);
    arpr(r,&area,&pr);
    printf("The area of circle is %f\n",area);
    printf("The perimeter of circle is %f",pr);

}
void arpr(int r , float * a , float* p){
    *a=3.14*r*r;
    *p=2*3.14*r;
}