#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node*next;
};
void display(struct node *p){
    printf("Elemens are\n");
    while(p!=NULL){
        printf("%d ",p->data);
        p=p->next;
    }
    printf("\n");
}
struct node*Insert_At_last(struct node*head,int data){
    struct node*new_node;
    new_node=(struct node*)malloc(sizeof(struct node));
    struct node*p=head;
    while(p->next!=NULL){
        p=p->next;
    }
    new_node->data=data;
    p->next=new_node;
    new_node->next=NULL;
    
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
    
    printf("Enter the no. for insert at last :");
    int n;
    scanf("%d",&n);
    Insert_At_last(head,n);
    display(head);
    

}