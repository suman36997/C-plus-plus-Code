#include<iostream>
#include<map>
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
Node*Inputdata(){
    Node*tail=NULL;
    Node*head=NULL;
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
void display(Node* head){
    while(head!=NULL){
        cout<<head->data<<" ";
        head=head->next;
    }
}
Node*RemoveDuplicates1(Node*head){
    if(head==NULL){
        return NULL;
    }
    Node*curr=head;
    Node*prev=NULL;
    map<Node* ,bool>visited;
    while(curr!=NULL){
        if(visited[curr]==true){
            prev->next=prev->next->next;
        }
        else{
            visited[curr]=true;
            prev=curr;
            curr=curr->next;
        }
    }
    return head;
    
}
Node*RemoveDuplicates(Node* head){
   if(head==NULL){
    return NULL;
   }
   Node*curr=head;
    Node*temp=NULL;
    Node*prev=NULL;
    while(curr!=NULL){
        temp=curr->next;
        while(temp!=NULL){
            if(curr->next!=NULL && curr->data==temp->data){
                prev->next=prev->next->next;
            }
          
                prev=temp;
            
                temp=temp->next;

        }
        curr=curr->next;
    }
    return head;
}
int main(){
    cout<<"Enter the elements in the nodes"<<endl;
 
   Node*temp= Inputdata();
    display(temp);
    // Node*temp1=temp;
    cout<<endl;
    temp=RemoveDuplicates(temp);
    display(temp);
    // display(temp1);
    // temp1=RemoveDuplicates1(temp1);
    // display(temp1);

}
