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
    Node*inputdata(){ 
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
Node* InsertAtTail(Node*&head,Node*&tail,int data){
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
Node*cloneList(Node*head){
        Node*temp=head;
        Node*anshead=NULL;
        Node*anstail=NULL;
        while(temp!=NULL){
            InsertAtTail(anshead,anstail,temp->data);
            temp=temp->next;
        }
        return anshead;
}
int main(){
    cout<<"Enter the data in the list"<<endl;
    Node*head=head->inputdata();
    (*head).display(head);
    Node*temp=cloneList(head);
    cout<<"Your clone list is "<<endl;
    temp->display(temp);

}