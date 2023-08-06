#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node*next;
};
void Transverse(struct node*p){
    printf("Elements are:\n");
    while(p!=NULL){
        printf("%d ",p->data);
        p=p->next;
    }
    printf("\n");
}
struct node*Delete_At_Last(struct node*head){
    struct node*ptr=head;
    struct node*p=head->next;
    while(p->next!=NULL){
        ptr=ptr->next;
        p=p->next;
    }
    ptr->next=NULL;
    free(p);
    return head;
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
    Transverse(head);
    Delete_At_Last(head);
    Transverse(head);
}