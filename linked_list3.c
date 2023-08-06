#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node*next;
};
void display(struct node *p){
    printf("Elements are:\n");
    while(p!=NULL){
        printf("%d ",p->data);
        p=p->next;
    }
    printf("\n");
}
struct node *Insert_At_AnyIndex(struct node*head,int index,int data){
    struct node*new_node;
    new_node=(struct node*)malloc(sizeof(struct node));
    struct node*p=head;
    for (int i = 1; i < index; i++)
    {
        p=p->next;
    }
    new_node->data=data;
   new_node->next= p->next;
    p->next=new_node;

    
}
int main(){
    struct node*head,*first,*secoand,*third;
    head=(struct node*)malloc(sizeof(struct node));
    first=(struct node*)malloc(sizeof(struct node));
    secoand=(struct node*)malloc(sizeof(struct node));
    third=(struct node*)malloc(sizeof(struct node));
    head->data=12;
    head->next=first;
    first->data=13;
    first->next=secoand;
    secoand->data=14;
    secoand->next=third;
    third->data=15;
    third->next=NULL;
    display(head);
    printf("Enter the index no.\n");
    int n;
    scanf("%d",&n);
    Insert_At_AnyIndex(head,n,17);
    display(head);

}