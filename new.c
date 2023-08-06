#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define MAX 3

char st[MAX],top=-1;
void push(char st[],int val);
int pop(char st[]);
int peek(char st[]);
void display(char st[]);

int main(int argc,char *argv[])
 {
   int val,option;
   do
   {
      printf("\n  MAIN MENU   ");
      printf("\n 1. PUSH");
      printf("\n 2. POP");
      printf("\n 3. PEEK");
      printf("\n 4. DISPLAY");
      printf("\n 5. EXIT");
      printf("\n Enter your option:");
      scanf("%d",&option);
      switch(option)
      {
          case 1:
             printf("\n Enter the number to be pushed on stack ");
             scanf("%c",&val);
             push(st,val);
             break;
          case 2:
             val=pop(st);
             if(val!=-1)
             printf("\n The value deleted from stack is :%c",val);
             break;
          case 3:
             val=peek(st);
             if(val!=-1);
             printf("\n The value stored at the top of the stack is: %c",val);
             break;
          case 4:
             display(st);
             break;
      }          
   } 
   while(option!=5);
   return 0;
 }
void push(char st[],int val)
{
 if(top==MAX-1)
 {
     printf("\n Stack Overflow");

 }
 else{
     top++;
     st[top]=val;
 }
}
int pop(char st[])
{
 int val;
 if(top==-1)
 {
     printf("\n Stack Overflow");
     return -1;
 }
}
void display(char st[])
{
  int i;
  if(top==-1)
  printf("\n Stack is Empty");
  else
  {
      for(i=top;i>=0;i--)
      printf("\n %d",st[i]);
      printf("\n");
  }
}
int peek(char st[])
{
if(top==-1)
{
    printf("\n Stack is Empty");
    return-1;
}
else 
return(st[top]);
}