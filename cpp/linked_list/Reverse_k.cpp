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


Node* kreverse(Node*head,int k){
    
    if (head==NULL)
    {
       return NULL;
    }

    Node*next=NULL;
    Node*prev=NULL;
    Node*curr=head;

    int count=0;
    while (curr!=NULL && count<k)
    {
        next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
        count++;
      
    }
 
    //recursion 
    if (next!=NULL)
    {
        head->next=kreverse(next,k);
    }

    return prev;
 
    
    
    
}  

void print(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
int main(){

    Node*head=new Node(8);
    head->next=new Node(8);
    head->next->next=new Node(6);
     head->next->next->next=new Node(8);
    head->next->next->next->next=new Node(6);

  
cout<<"original linkiedlist"<<endl;
    print(head);
    int k=2;
    head=kreverse(head,k);
    cout<<"reverse linkiedlist"<<endl;
  print(head);


}

