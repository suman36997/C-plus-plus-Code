#include<stdio.h>
#include<conio.h>
int sum_rec(int);
int main(){
    printf("Enter the no. to sum its digits\n");
    int a;
    scanf("%d",&a);
    int k=sum_rec(a);
    printf("Requred sum of digits: %d",k);


}
int sum_rec(int x){
    int s , remainder;
    if(x!=0){
        remainder=x%10;
        s=remainder+sum_rec(x/10);
    }
    else{
        return 0;
    }
    return s;
}