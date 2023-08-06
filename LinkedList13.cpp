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
};
void InsertAtTail(Node * &tail,Node*curr){
    tail->next=curr;
    curr=tail;
}
Node*sort012(Node*head){
    Node*ZeroHead=new Node(-1);
    Node *ZeroTail=ZeroHead;
    Node*OneHead=new Node(-1);
    Node*OneTail=OneTail;
    Node*TwoHead=new Node(-1);
    Node*TwoTail=TwoHead;
    Node*curr=head;
    while(curr!=NULL){
        int value=curr->data;
        if(value==0){
            InsertAtTail(ZeroTail,curr);
        }
        else if(value==1){ 
            InsertAtTail(OneTail,curr);
         }
         else if(value==2){
            InsertAtTail(TwoTail,curr);
         }
         curr=curr->next;
         }

         if(OneHead->next!=NULL){
            ZeroTail->next=OneHead->next;
            
         }
         else{
            ZeroTail->next=TwoHead->next;
         }
         OneTail->next=TwoHead->next;
         TwoTail->next=NULL;
         head=ZeroHead->next;
         delete ZeroHead;
         delete OneHead;
         delete TwoHead;
         return head;

    

}
int main(){
    Node*head;
    Node*tail1(0);
    Node*tail2(1);
    Node*tail3(2);
    Node*tail4(2);
    Node*tail5(1);
    Node*tail6(0);
    Node*tail7(1);
    InsertAtTail(tail1,head);
}