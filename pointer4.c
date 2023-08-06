// #include<stdio.h>
// #include<conio.h>
// #include<math.h>
// void  area(float *s ,float *ar){
//      int a ,b , c;
//     printf("Enter the three sides of triangle\n");
//     scanf("%d%d%d",&a,&b,&c);
//      *s=(a+b+c)/2;
//     *ar=sqrt(*s*(*s-a)*(*s-b)*(*s-c));

// }
// int main(){
    
    
//     float s,ar;
//     // scanf("%d,%d,%d",&a,&b,&c);
// area(&s,&ar);
//         printf("Area of triangle is %f %f",ar,s);

#include <stdio.h>
int main()
{
    float x,i;
    int y;
    for (y=1; y<=6; y++)
    {
        for (x=5.5; x<=12.5; x=x+0.5)
        {
            i=2+(y+(0.5*x));
            printf("y = %d , x = %f  ,i = %f\n",y,x,i);
        }
    }
    return 0;
}