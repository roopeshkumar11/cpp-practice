#include<iostream>
using namespace std;


class Node{
    public:
    int data;
    Node*next;
    Node*prev;
    
    Node(int d){
        this->data=d;
        this->prev=NULL;
        this->next=NULL;
    }

    ~Node(){
        int val=this->data;
        while (next!=NULL)
        {
           delete next;
           next=NULL;
        }

        cout<<"Memory freee"<<" ";
        
    }

};
void print(Node*head){
    Node*temp=head;
    while (temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
    
}

void lenght(Node*head){
    Node*temp=head;
    int cnt=0;
    while (temp!=NULL)
    {
      cnt++;
        temp=temp->next;
    }

    cout<<cnt<<endl;
}


void InsertAthead(Node* &tail,Node* &head,int data){

    if(head==NULL){
Node *newnode=new Node(data);
head=newnode;
   tail=newnode;
    }

    else{
          Node*temp=new Node(data);
    temp->next=head;
    head->prev=temp;
    head=temp;
 
    }
  
    
}

void InsertAttail(Node* &tail,Node* &head,int data){
  if(tail==NULL){
Node *newnode=new Node(data);
tail=newnode;
head=newnode;
  }
  else{
      Node*temp=new Node(data);
   
        tail->next=temp;
        temp->prev=tail;
        temp=tail;
  }
    
}

void insertAtPostion(Node*&tail ,Node* &head,int data,int postion){
    if(postion==1){
        InsertAthead(tail,head,data);
        return;
    }

    Node*temp=head;
    int cnt=1;

    if(cnt<postion-1){
        temp=temp->next;
        cnt++;

    }

    if(temp->next==NULL){
        InsertAttail(tail,head,data);
     

        
    }

    Node *newnode=new Node(data);
    newnode->next=temp->next;
    temp->next->prev=newnode;
    temp->next=newnode;
    newnode->prev=temp;


}

void deletepostion(int postion,Node* &head){
    if(postion==1)

    {
        Node*temp=head;
        temp->next->prev=NULL;
        head=temp->next;
        temp->next=NULL;
        delete temp;

    }

    else{
        Node*curr=head;
        Node*prev=NULL;

        int cnt=1;
        while(cnt<postion){
            prev=curr;
            curr=curr->next;
            cnt++;
        }

        curr->prev=NULL;
        prev->next=curr->next;
        curr->next=NULL;

        delete curr;
    }
}

int main(){

    Node*temp=new Node(10);
    Node*head=temp;
Node*tail=temp;
  
    lenght(head);


InsertAthead(tail,head,11);
  print(head);
  InsertAttail(tail,head,13);
  print(head);
  
  insertAtPostion(tail,head,12,2);
  print(head);

    insertAtPostion(tail,head,120,1);
  print(head);

     insertAtPostion(tail,head,1,7);
  print(head);
   deletepostion(1,head);
     print(head);

}