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
        Node*head=NULL;
        Node*tail=NULL;
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
    int lenOfLinList(Node*head){
        static int count=0;
        Node*temp=head;
        while(temp!=NULL){
            count++;
            temp=temp->next;
        }
        return count;
    }
    Node *midPoint(Node*head){
        Node*slow=head;
        Node*fast=head->next;
        
        // int len=lenOfLinList(head);
        
            while(fast!=NULL ){
                fast=fast->next;
                if(fast!=NULL){
                    fast=fast->next;
                }
                slow=slow->next;
                
            }
            
            
        
        return slow;
        // else if((len/2)!=0){
        //     while(fast!=NULL){
        //         fast=fast->next->next;
        //         slow=slow->next;
        //     }
            
        // }
    }
    Node*midpoint1(Node*head){
        int len=lenOfLinList(head);
        Node*temp=head;
        int mid=len/2;
        int cnt=0;
        while(cnt<mid){
            temp=temp->next;
            cnt++;
        }
        return temp;
    }
};
int main(){
    cout<<"Enter the elements for nodes"<<endl;
    Node*head=head->takeInput();
    head->display(head);
    cout<<endl;
    // int count=head->lenOfLinList(head);
    // cout<<count<<endl;
    Node*mid=mid->midPoint(head);
    cout<<mid->data<<endl;
    Node*mid1=mid1->midpoint1(head);
    cout<<mid1->data<<endl;
}