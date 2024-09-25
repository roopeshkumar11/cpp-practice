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


Node* removedupliavte(Node*head){
Node* curr=head;
Node*prev=NULL;

if(head==NULL){
    return NULL;
}
while(curr!=NULL){
if(curr->next!=NULL && curr->data==curr->next->data || curr->next->data==curr->next->next->data){
Node*next_next=curr->next->next;
Node*next_next_next=curr->next->next->next;
Node*delte=curr->next;
delete(delte);
delete(next_next);
curr->next=next_next_next;

}
else{
    curr=curr->next->next;
}
}


}
int main(){
    Node* head=new Node(2);
    head->next=new Node(9);
      head->next->next=new Node(1);

    head->next->next->next=new Node(6);
     head->next->next->next->next=new Node(6);
    removedupliavte(head);
    Node*temp=head;
    while (temp!=NULL)
    {
        cout<<temp->data;
        temp=temp->next;
    }
    

}