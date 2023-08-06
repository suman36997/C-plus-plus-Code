#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node*next;
    
};
void traverse(struct node*p){
    printf("Elements are:\n");
    while(p!=NULL){
        printf("%d ",p->data);
        p=p->next;
    }
    printf("\n");
}
struct node*Delete_At_beg(struct node*head){
    struct node*ptr=head;
    struct node*p=head->next;
    ptr->next=NULL;
    head=p;
    free(ptr);
    return head;
 
    
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

    int choice;
    while (1) {
 
        printf("\n\t1  To see list\n");
        
        printf("\t2  For deletion of "
               "first element\n");
        printf("\t3  For deletion of "
               "last element\n");
       
        printf("\t4 To exit\n");
        printf("\nEnter Choice :\n");
        scanf("%d", &choice);
 
        switch (choice) {
        case 1:
            traverse(head);
            break;
        
        case 2:
            head=Delete_At_beg(head);
            break;
        case 3:
           head= Delete_At_Last(head);
            break;
        
        case 4:
            exit(1);
            break;
        default:
            printf("Incorrect Choice\n");
        }
    }
    return 0;
}

