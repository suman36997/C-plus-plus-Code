#include<stdio.h>
#include<conio.h>
void swap_var(int *x,int *y) //swap using pointer
{
    int temp=*x;
    *x=*y;
    *y=temp;
}

// void swap_pr(int &z , int &w)//swap using refrence variable     
// {
//     int temp=z;
//     z=w;
//     w=temp;
// }

int main(){
    int a , b ,c ,d ;
  c=40;d=50;
  printf("Enter the no.\n");
  scanf("%d%d",&a,&b);
    swap_var(&a,&b);
    // swap_pr(c,d);
    printf("a=%d\nb=%d\n",a,b);
    printf("c=%d\nd=%d",c,d);
}
