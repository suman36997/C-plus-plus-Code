#include<stdio.h>
#include<conio.h>
void print_series(int n){
    int c;
    int a = 0;
    int b = 1;
    for (int  i = 0; i < n; i++)
    {
        c=a+b;
        a=b;
        b=c;
        printf(" ; ");
        printf("%d",c);
    }

    
}
int mian(){
    printf("Enter the no. of elements wherever you want to print series \n");
    int n;
    scanf("%d",&n);
    printf("Required series are : \n");
    printf(" 0 , 1 ");
    print_series(n);

}