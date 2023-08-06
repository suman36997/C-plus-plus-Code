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
    void display(Node*head){
        while(head!=NULL){
            cout<<head->data<<" ";
            head=head->next;
        }
    }

};
Node*Middle(Node*head){
    Node*fast=head->next;
    Node*slow=head;
    while(fast!=NULL&&fast->next!=NULL){
        fast=fast->next->next;
        
        slow=slow->next;
    }
    return slow;
}
Node*revAfterMid(Node*head){
    // Node*temp=head;


    // if(temp==NULL&&temp->next==NULL){
    //     return temp;
    // }
    // Node*chotahead=revAfterMid(temp->next);
    // temp->next->next=temp;
    // temp->next=NULL;
    // return chotahead;
    Node*curr=head;
    Node*prev=NULL;
    Node*next=NULL;
    while(curr!=NULL){
        next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;

    }
    return prev;

}
bool checkPalidrome(Node*head){
    Node*temp1=head;
    Node*mid=Middle(head);
    Node*temp=mid->next;
    mid->next=revAfterMid(temp);
    Node*temp2=mid->next;
    if(head->next==NULL){
        return true;
    }
    while(temp2!=NULL){
        if(temp1->data!=temp2->data){
            return false;
        }
        else{
        temp1=temp1->next;
        temp2=temp2->next;
        }
        
    }
    temp=mid->next;
    mid->next=revAfterMid(temp);
    return true;
}
int main(){
    cout<<"Enter the elements in node to check it is palidrome or not "<<endl;
    Node*head=head->Inputdata();
    head->display(head);
    bool check=checkPalidrome(head);
    cout<<endl;
    if(check){
        cout<<"List is palidrome"<<endl;
    }
    else{
        cout<<"Not a palidrome list"<<endl;
    }

}