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
   Node*inputdata(){
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
   Node*deleteDuplicate(Node*head){
    if(head==NULL){
        return NULL;
    }
    Node*curr=head;

    while(curr!=NULL){
        if(curr->next!=NULL && curr->data==curr->next->data){
        
        curr->next=curr->next->next;
        
    }
    else{
        curr=curr->next;
    }
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
 int main(){
    cout<<"Enter the elements in nodes"<<endl;
    Node*head=head->inputdata();
    
    head->display(head);
    cout<<endl;
    
    cout<<"Elements after deleting duliplicates"<<endl;
    Node*temp=head->deleteDuplicate(head);
    temp->display(temp);
    
    
 }