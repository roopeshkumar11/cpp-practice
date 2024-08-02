#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int d){
        this->data=d;
        this->next=NULL;
    }
    ~Node(){
        int value=this->data;
        if (this->next!=NULL)
        {
            delete next;
            next=NULL;
        }

        cout<<"memory free for node with data "<<value<<endl;
        
    }
};

void insertAtHead(Node* &tail,int element,int d){
    if (tail==NULL)
    {
        Node* newnode=new Node(d);
        tail=newnode;
        newnode->next=newnode;


    }

    else{
        Node* cuur=tail;
        while (cuur->data!=element)
        {
            cuur=cuur->next;
        }
        Node* temp=new Node(d);
        temp->next=cuur->next;
        cuur->next=temp;

        
    }
    

}

void print(Node* tail){
    Node* temp=tail;
    if (tail==NULL)
    {
        cout<<"list empty"<<endl;
    }
    
    do
    {
        cout<<tail->data<< " ";
        tail=tail->next;
        
    } while (tail!=temp);
    cout<<endl;
    

}

void deletenode(Node* tail,int value){
    if (tail==NULL)
    {
        cout<<"List is empty"<<endl;
    }

    else{
        Node*prev=tail;
        Node* curr=prev->next;
        while (curr->data!=value)
        {
            prev=curr;
            curr=curr->next;
        }
        prev->next=curr->next;
        if (curr==prev)
        {
            tail=prev;
        }
        
        if (tail==curr)
        {
            tail=prev;
        }
        
        curr->next=NULL;
        delete curr;

        
    }
    


}
int main(){
    Node* tail=NULL;
    insertAtHead(tail,4,3);
    print(tail);
     insertAtHead(tail,3,6);
    print(tail);
     insertAtHead(tail,6,0);
    print(tail);
     insertAtHead(tail,6,5);
    print(tail);
     insertAtHead(tail,3,5);
    print(tail);
    deletenode(tail,3);
    print(tail);




}