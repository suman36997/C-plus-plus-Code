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
    Node *Inputdata(){
        Node *head=NULL;
        Node *tail=NULL;
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
        while(head!=NULL){
            cout<<head->data<<" ";
            head=head->next;
        }
    }
};
int main(){
    Node*head=head->Inputdata();
    head->display(head);

}