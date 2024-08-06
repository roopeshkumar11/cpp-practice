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
};

Node* duplicate(Node* head){
    if (head==NULL)
    {
        return NULL;

    }

Node*curr=head;

    while (curr!=NULL)
    {
        if (curr->next!=NULL && curr->data==curr->next->data)
        {
           
         Node*next_next=curr->next->next; 
           Node*todelete=curr->next;
           delete(todelete);
           curr->next=next_next;
          

        }

        else{
            curr=curr->next;
        }
      
    }
    
    return head;
    
    
}

void print(Node*head){
    Node*temp=head;
    while (temp!=NULL)
    {
        cout<<temp->data<<endl;
        temp=temp->next;
    }
    
}


int main(){
Node*head=new Node(2);                  //this code only for stored array
head->next=new Node(2);
head->next->next=new Node(2);
head->next->next->next=new Node(8);

head->next->next->next->next=new Node(9);
cout<<"before deletetion"<<endl;
print(head);

duplicate(head);
cout<<"after deletetion"<<endl;
 print(head);


}