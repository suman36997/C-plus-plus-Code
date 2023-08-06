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
    // ~Node(){
    //     int data=this->data;
    //     if(this->next!=NULL){
    //         delete next;
    //         next=NULL;
    //     }
    //     cout<<"Memory is free with value " <<data<<endl;
    //     }
};
Node* InsertNode(Node*tail,int element,int d){
    if(tail==NULL){
        Node*newNode=new Node(d);
        tail=newNode;
        newNode->next=newNode;
    }
    else{
        Node*curr=tail;
        while(curr->data!=element){
            curr=curr->next;
        }
        Node*newNode=new Node(d);
        newNode->next=curr->next;
        curr->next=newNode;
    }
    return tail;
}
void display(Node*tail){
    Node*temp=tail;
    
    do{
        cout<<tail->data<<" ";
        temp=temp->next;
    }while(temp->next!=tail);

}
int main(){
    Node*tail=NULL;
    tail= InsertNode(tail,5,3);
    InsertNode(tail,3,6);
    InsertNode(tail,6,12);
    InsertNode(tail,12,24);
    display(tail);
}