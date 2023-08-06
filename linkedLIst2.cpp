#include <iostream>
using namespace std;
class Node
{
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
            Node *newNode=new Node(data);
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
    Node *InsertNodeRec(Node *head,int data,int position){
        if(head==NULL){
            return head;
        }
        Node*temp=head;
        Node *newNode=new Node(data);
        if(position==0){
            newNode->next=temp;
            head=newNode;
            return head;
            
        }
        Node *x=InsertNodeRec(head->next,data,position-1);
        head->next=x;
        return head;
    }
};
int main()
{
    cout<<"Enter the elements"<<endl;
    Node *head=head->takeInput();
    cout<<"Enter the position of elements"<<endl;
    int position;
    cin>>position;
    cout<<"Enter  the data to insert"<<endl;
    int data;
    cin>>data;
    head=head->InsertNodeRec(head,data,position);
    head->display(head);
}