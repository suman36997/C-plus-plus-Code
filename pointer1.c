#include<stdio.h>
#include<conio.h>
int main(){
    int i=10;
    printf("To display the value of i is %d\n",i);
    printf("To display the value using pointer is %d\n",*(&i));
    printf("To display the adress of i is %u\n",&i);
}