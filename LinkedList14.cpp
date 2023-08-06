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
    Node *merge2sortedList(Node *first,Node*secoand){
        Node*curr1=first;
        Node*curr2=secoand;
        Node*next1=curr1->next;
        Node*next2=curr2->next;
        // if only one element is present in first
        if(curr1->next==NULL){
            curr1->next=curr2;
            return first;
        }
        if(first==NULL){
            return secoand;
        }
        if(secoand==NULL){
            return first;
        }
        while(next1!=NULL && curr2!=NULL){
            if(curr2->data>=curr1->data&&curr2->data<=next1->data){
                curr1->next=curr2;
                next2=curr2->next;
                curr2->next=next1;
                curr1=curr2;
                curr2=next2;
            }
            else{
                curr1=curr1->next;
                next1=next1->next;
                if(next1==NULL){
                    curr1->next=curr2;
                    return first;
                }
            }

        }
        return first;
    }
    void display(Node*head){
        while (head!=NULL){

            cout<<head->data<<" ";
            head=head->next;
        }
    }
};
int main(){
    cout<<"Enter the value in first Node"<<endl;
    Node*head1=head1->Inputdata();
    head1->display(head1);
    cout<<endl;
    cout<<"Now enter the value in secoand Node"<<endl;
    Node*head2=head2->Inputdata();
    head2->display(head2);
    cout<<endl;
    head1->merge2sortedList(head1,head2);
    head1->display(head1);
}