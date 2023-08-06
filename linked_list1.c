#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node{
    int data ;
    struct node *next;
};
struct node *insert_at_beg(struct node * head,int data){
    struct node*new_node;
    new_node=(struct node*)malloc(sizeof(struct node));
    struct node *p=head;
    new_node->next=p;
    new_node->data=data;
    return new_node;

}
void display(struct node*p){
    printf("Elements are:\n");
    while(p!=NULL){
        printf("%d ",p->data);
        p=p->next;
    }
    printf("\n");
}
int main(){
    struct node*head,*first , *secoand , *third;
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
    head=insert_at_beg(head,18);
    display(head);

}