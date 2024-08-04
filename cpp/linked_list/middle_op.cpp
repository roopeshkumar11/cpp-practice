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
Node* getmiddle(Node* head){
    if(head==NULL ||head->next==NULL){
        return head;
    }

    if(head->next->next==NULL){
        return head;
    }

    Node*slow=head;
    Node* fast=head->next;
    while (fast!=NULL)
    {
       fast=fast->next;
       if (fast!=NULL)
       {
         fast=fast->next;
       }

        slow=slow->next;
    }
    return slow;
    
}
int main(){
 Node *head=new Node(4);
    head->next=new Node(9);
    head->next->next=new Node(7);
    head->next->next->next=new Node(5);
    head->next->next->next->next=new Node(12);
    head->next->next->next->next->next=new Node(2);

    Node*m=getmiddle(head);

    if (m!=NULL)
    {
        cout<<"Middle data of linkid list :"<<m->data;
    }
    
    else{
          cout<<"linkid list is empty :"<<m->data;
    }

}