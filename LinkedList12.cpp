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
    Node *Inputdata(){
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

    void display(Node *head){
        while(head!=NULL){
            cout<<head->data<<" ";
            head=head->next;
        }
    }
    Node *sortZeroOnesTwo(Node*head){
    int countZero=0;
    int countOnes=0;
    int countTwos=0;
    Node*temp=head;
    while(temp!=NULL){
        if(temp->data==0){
            countZero++;
        }
        else if(temp->data==1){
            countOnes++;
        }
        else if(temp->data==2){
            countTwos++;
        }
    }
    temp=head;
    while(temp!=NULL){
        if(countZero!=0){
        temp->data=0;
        
        countZero--;
    }
    else if(countOnes!=0){
        temp->data=1;
        
        countOnes--;
    }
    else if(countTwos!=0){
        temp->data=2;
        
        countTwos--;
    }
    temp=temp->next;


    }
    return head;
    

}
};

int main(){
    cout<<"Enter the data in the Nodes"<<endl;
    Node *head=head->Inputdata();
    Node*temp;
    temp->display(head);
   temp->sortZeroOnesTwo(head);
    temp->display(head);
    
}