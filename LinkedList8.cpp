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
    Node*takeInput(){
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
    void display(Node*head)
        {
            while(head!=NULL){
                cout<<head->data<<" ";
                head=head->next;
            }
            cout<<endl;
        }
    Node* K_Reverse(Node*head,int k){
        if(head==NULL || head->next==NULL){
            return head ;
        }
        Node*prev=NULL;
        Node*curr=head;
        Node*forward=NULL;
        int count=0;
        while(curr!=NULL&&count<k){
            forward=curr->next;
            curr->next=prev;
            prev=curr;
            curr=forward;
            count++;
        }
        if(forward!=NULL){
        head->next=K_Reverse(forward,k);

        }
        return prev;
    }
};
int main(){
    cout<<"Enter the elements in nodes"<<endl;
    Node *head=head->takeInput();
    head->display(head);
    cout<<"Now enter how many elements you want to reverse"<<endl;
    int k;
    cin>>k;
    head->K_Reverse(head,k);
    head->display(head);
}