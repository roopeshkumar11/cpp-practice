#include<iostream>
using namespace std;


class Node{
    public:
    int data;
    Node*next;

    Node(int d){
    this->data=d;
    this->next=NULL;
    }

};


void insertAthead(Node*&head,int d){
    Node *temp=new Node(d);
    temp->next=head;
    head=temp;
}

void insertAttail(Node* &tail,int d){
    Node*temp=new Node(d);
    tail->next=temp;
    tail=tail->next;
}


print(Node*head){
    Node*temp=head;

    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}

int main(){

    Node*temp=new Node(10);

    Node*head=temp;
    Node *tail=temp;

    insertAthead(head,20);
    insertAthead(head,30);
    insertAthead(head,40);

   
    insertAttail(tail,100);

    print(head);

    

}