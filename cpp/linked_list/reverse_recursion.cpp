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
    Node *reverse(Node* head){
        if (head==NULL || head->next==NULL)
        {
            return head;
        }

        Node* chotanode=reverse(head->next);
        head->next->next=head;
        head->next=NULL;


        return chotanode;
        
    }

void print(Node* head){
    Node* temp=head;
    while (temp!=NULL)
    {
       cout<<temp->data<<endl;
       temp=temp->next;
    }
    
}


int main(){
Node*head=new Node(5);
head->next=new Node(7);
head->next->next=new Node(8);

cout<<"before revsrese"<<endl;
print(head);
head=reverse(head);
cout<<"After revsrese"<<endl;
print(head);




}