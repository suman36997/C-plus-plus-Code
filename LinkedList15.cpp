#include<iostream>
#include<vector>
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
    bool checkPalidrome(Node*head){
        vector<int>arr;
        Node*temp=head;
        while(temp!=NULL){
            arr.push_back(temp->data);
            temp=temp->next;
        }
        int s=0;
        int e=arr.size()-1;
        while(s<=e){
            if(arr[s]!=arr[e]){
                return false;
            }
            else{
            s++;
            e--;
            }
            
        }
        return true;
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
    cout<<"Enter the data in list to check it is palidrome or not"<<endl;
    Node*head=head->Inputdata();
    head->display(head);
    cout<<endl;
    bool s=head->checkPalidrome(head);
    if(s){
        cout<<"list is palidrome"<<endl;
    }
    else{
        cout<<"Not a palidrome list"<<endl;
    }


}