#include<iostream>
using namespace std;
class DoublyNode{
    public:
    int data;
    DoublyNode *next;
    DoublyNode *prev;
    
    DoublyNode(int data){
        this->data=data;
        this->next=NULL;
        this->prev=NULL;
    }
    ~DoublyNode(){
        int data=this->data;
        if(this->next!=NULL){
            delete next;
            next=NULL;
        }
        cout<<"Memory is free with value " <<data<<endl;
    }
    DoublyNode *Inputdata(){
        DoublyNode*head=NULL;
        DoublyNode*tail1=NULL;
        DoublyNode*tail2=NULL;
        int data;
        cin>>data;
        while(data!=-1){
            DoublyNode*newNode=new DoublyNode(data);
            if(head==NULL){
                head=newNode;
                tail1=newNode;
                tail2=newNode;
            }
            else{
                tail1->next=newNode;
                tail1=newNode;
                tail1->prev=tail2;
            }
            cin>>data;
        }
        return head;

    }
    void display(DoublyNode *head){
        while(head!=NULL){
            cout<<head->data<<" ";
            head=head->next;
        }
    }
    void Reverse(DoublyNode *head){
        DoublyNode*temp=head;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        DoublyNode*temp1=temp;
        while(temp1!=NULL){
            cout<<temp1->data<<" ";
            temp1=temp1->prev;
        }
        
    }
    DoublyNode*DeleteNode(DoublyNode *head,int position){
        DoublyNode*temp=head;
        if(position==0){
            temp->next->prev=NULL;
            head=temp->next;
            temp->next=NULL;
            delete(temp->next);
            return head;
        }
        else{
            for(int i=1;i<position;i++){
                temp=temp->next;
            }
            temp->next=temp->next->next;
            DoublyNode*a=temp->next->next;
            a->prev=temp;
            // temp->next->next=NULL;
            // temp->next->prev=NULL;
            

        }
            return head;  

        
    }
    DoublyNode *InsertNode(DoublyNode *head,int position ,int data){
        DoublyNode*temp=head;
        DoublyNode*n=new DoublyNode(data);
        if(position==0){
            n->next=temp;
            temp->prev=n;
            head=n;
            return head;
        }
        for(int i=1;i<position&&temp!=NULL;i++){
            temp=temp->next;
        }
         n->next=temp->next;
         DoublyNode*n2=temp->next;
         n2->prev=n;
         temp->next=n;
         n->prev=temp;

        return head;

    }
};
int main(){
    cout<<"Input the data in linked list"<<endl;
    DoublyNode*head=head->Inputdata();
    head->display(head);
    DoublyNode*temp=head;
    cout<<endl;
    cout<<"Enter the position and data to insert in the linked list"<<endl;
    int position,data;
    cin>>position>>data;
    head->InsertNode(head,position,data);
    head->display(head);
    cout<<endl;
    head->Reverse(head);

    cout<<"Enter the position where you want to delete node"<<endl;
    cin>>position;
    temp->DeleteNode(temp,position);
    temp->display(temp);

}