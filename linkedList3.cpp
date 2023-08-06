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
    Node *takeinput(){
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
    void display(Node *head){
        Node*temp=head;
        while(temp!=NULL){
            cout<<temp->data<<" ";
            temp=temp->next;
        }
    }
    Node *DeleteNodeRec(Node*head,int position){
        if(head==NULL){
            return head;
        }
        if(position==0){
             Node *temp=head;
            head=temp->next;
            delete temp;
            return head;
        }
        Node *x=DeleteNodeRec(head->next,position-1);
        head->next=x;
        return head;
    }
};
int main(){
    cout<<"Enter the data in nodes"<<endl;
    Node *head=head->takeinput();
    int position;
    cout<<"Enter the positio where you want to delete"<<endl;
    cin>>position ;
    head=head->DeleteNodeRec(head,position);
    head->display(head);
}
