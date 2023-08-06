#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node*next;
    Node(int data){
        this->data=data;
        next=NULL;
    }
    Node*Inputdata(){
        Node*head=NULL;
        Node*tail=NULL;
        int data;
        cin>>data;
        while(data!=-1){
            Node*newNode=new Node(data);
            if(head==NULL){
                head=newNode;
                tail=newNode;
            }
            else{
                tail->next=newNode;
                tail=newNode;
            }
            cin>>data;
        }
        return head;
    }
    void display(Node*head){
        Node*temp=head;
        while(temp!=NULL){
            cout<<temp->data<<" ";
            temp=temp->next;
        }
    }
};
Node*Reverse(Node*head){
    Node*curr=head;
    Node*prev=NULL;
    Node*next1=NULL;
    while(curr!=NULL){
        next1=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next1;
    }
    return prev;
}
Node*InsertAtTail(Node*&head,Node*&tail,int data){
    Node*newNode=new Node(data);
    if(head==NULL){
        head=newNode;
        tail=newNode;
        return head;
        
    }
    else{
        tail->next=newNode;
        tail=newNode;
    }
    return head;
}
Node*addList(Node *first,Node*secoand){
    Node*temp1=Reverse(first);
    Node*temp2=Reverse(secoand);
    int carry=0;
    Node*anshead=NULL;
    Node*anstail=NULL;
    while(temp1!=NULL&&temp2!=NULL){
        int sum=carry+temp1->data+temp2->data;
        int digit=sum%10;
        InsertAtTail(anshead,anstail,digit);
        carry=sum/10;
        temp1=temp1->next;
        temp2=temp2->next;
    }
    
    while(temp1!=NULL){
        int sum=carry+temp1->data;
        int digit=sum%10;
        InsertAtTail(anshead,anstail,digit);
        carry=sum/10;
         temp1=temp1->next;
        

    }
    while(temp2!=NULL){
        int sum=carry+temp2->data;
        int digit=sum%10;
        InsertAtTail(anshead,anstail,digit);
        carry=sum/10;
        temp2=temp2->next;
    }
    while(carry!=0){
        int sum=carry;
        int digit=sum%10;
        InsertAtTail(anshead,anstail,digit);
        carry=sum/10;
    }
    anshead=Reverse(anshead);
    return anshead;
}
int main(){
    cout<<"Enter the elements in first list to sum"<<endl;
    Node*head1=head1->Inputdata();
    head1->display(head1);
    cout<<endl;
    cout<<"Now enter the elements in secoand list "<<endl;
    Node*head2=head2->Inputdata();
    head2->display(head2);
    cout<<endl;
    Node*head3=addList(head1,head2);
    cout<<"Elements after add"<<endl;
    head3->display(head3);
}