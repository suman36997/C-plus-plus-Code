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
        Node*temp=head;
        while(temp!=NULL){
            cout<<temp->data<<" ";
            temp=temp->next;
        }
    }

};
Node*TofindMid(Node*head){
    Node*slow=head;
    Node*fast=head->next;
    while(fast!=NULL&&fast->next!=NULL){
        fast=fast->next->next;
        slow=slow->next;
    }
    return slow;
}
Node* merge(Node*first,Node*secoand){
   if(first==NULL){
    return secoand;
   }
   if(secoand==NULL){
    return first;
   }
   Node*ans=new Node(-1);
   Node*temp=ans;
   while(first!=NULL&&secoand!=NULL){
    if(first->data<secoand->data){
        temp->next=first;
        temp=first;
        first=first->next;
    }
    else{
        temp->next=secoand;
        temp=secoand;
        secoand=secoand->next;
    }
    
   }
   while(first!=NULL){
    temp->next=first;
    temp=first;
    first=first->next;
   }
   while(secoand!=NULL){
    temp->next=secoand;
    temp=secoand;
    secoand=secoand->next;
   }
   
   ans=ans->next;
   return ans;
    

}
Node* mergeSort(Node*head){
    if(head==NULL || head->next==NULL){
        return head ;
    }
    Node*mid=TofindMid(head);
    Node*left=head;
    Node*right=mid->next;
    mid->next=NULL;
    left=mergeSort(left);
    right=mergeSort(right);
    Node*result=merge(left,right);
    return result;
}
int main(){
    cout<<"Enter the elements in linked list to sort using mergesort"<<endl;
    Node*head=head->Inputdata();
    head->display(head);
    cout<<endl;
    Node*temp=mergeSort(head);
    temp->display(temp);

}