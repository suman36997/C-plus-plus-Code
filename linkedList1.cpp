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
    Node *takeInput(){
        Node *head=NULL;
        Node *tail=NULL;
        int data;
        cin>>data;
        while(data!=-1){
            Node *newnode=new Node(data);
            if(head==NULL){
                head=newnode;
                tail=newnode;
            }
            else{
                tail->next=newnode;
                // tail=tail->next;
                tail=newnode;

            }
        cin>>data;

        }
        return head;
    }
    Node* InsertNode(Node *head,int data,int position){
        Node *temp=head;
        Node *n=new Node(data);
        if(position==0){
            n->next=temp;
            head=n;
            return head;
        }
        
        for(int i=1;i<position&&temp!=NULL;i++){
            temp=temp->next;
        }
        n->next=temp->next;
        temp->next=n;
        
        
        return head;

    }
    Node *DeleteNode(Node *head,int position){
        Node *temp=head;
        if(position==0){
            temp=temp->next;
            head=temp;
            return head;
        }
        for(int i=1 ;i<position&&temp!=NULL;i++){
            temp=temp->next;
        }
        Node*a=temp->next;
        temp->next=a->next;
        delete a;
        return head;
    }
    void display(Node*head){
        Node *temp=head;
        while(temp!=NULL){
            cout<<temp->data<<" ";
            temp=temp->next;
        }
        cout<<endl;
         while(head!=NULL){
            cout<<head->data<<" ";
            head=head->next;
        }

       
    }
};
int main(){
    // Node *n1=new Node(1);
    // Node *n2=new Node(2);
    // Node *n3=new Node(3);
    // Node *n4=new Node(4);
    // Node *n5=new Node(5);
    // Node *head=n1;
    // n1->next=n2;
    // n2->next=n3;
    // n3->next=n4;
    // n4->next=n5;
    int choose;
    cout<<"Enter the nodes"<<endl;
    Node *head=head->takeInput();
    cout<<"Enter the position where you want to insert and delete nodes node"<<endl;
    int position;
    cin>>position;
    cout<<"Enter 1 for Delete Node\n Enter 2 for Insert Nodes\nEnter -1 for exit"<<endl;
    cin>>choose;
 
        switch(choose){
        case 1:head=head->DeleteNode(head,position);
        head->display(head);
        break;
        case 2:
        cout<<"Now enter the element to insert"<<endl;
        int element;
        cin>>element;
        head=head->InsertNode(head,element,position);
        head->display(head);
        break;
        default:
        cout<<"you entered wrong choice"<<endl;
    }
    

    
    

    // 
    // cout<<endl;
    // head->display(head);


}