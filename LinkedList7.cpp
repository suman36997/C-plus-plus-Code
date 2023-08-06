#include<iostream>
using namespace std;
class Node{
    public:
        int data;
        Node *next;
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
        Node*Revrec(Node*head){
            if(head==NULL ||head->next==NULL){
                return head;
            }
        Node*chotahead= Revrec(head->next);
        head->next->next=head;
        head->next=NULL;
        return chotahead;

        }
        Node*Reverse(Node*head){
            Node*curr=head;
            Node*prev=NULL;
            Node*forward=NULL;
            while(head!=NULL){
                forward=curr->next;
                curr->next=prev;
                prev=curr;
                curr=curr->next;

            }
            return prev;
        }

};
int main(){
    cout<<"Enter the elements in nodes"<<endl;
    Node*head=head->Inputdata();
    head->display(head);
    Node*temp=head->Revrec(head);
    cout<<endl;
    temp->display(temp);
}