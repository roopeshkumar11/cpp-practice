#include<iostream>
using namespace std;

class Node{
    public:
    int data;
   
     Node*prev;
     Node*next;

     Node(int d){
        this->data=d;
        
        this->prev=NULL;
        this->next=NULL;

     }

     ~Node(){
        int val=this->data;
        if (next!=NULL)
        {
            delete next;
            next=NULL;
        }
        cout<<" memmry free for node with data  "<<val<<endl;
        

     }
};

     void print(Node* head){
        Node*temp=head;
        while (temp!=NULL)
        {
            cout<<"data of linked list "<<temp->data<<endl;;
            temp=temp->next;
        }
        
     }


    void insertAthead(Node* &head,int d){
        if(head==NULL){
        Node* temp=new Node(d);
        head=temp;
        }
        else{
         Node* temp=new Node(d);
        temp->next=head;
        head->prev=temp;
        head=temp;
        }
      


    }

    void inserAtTail(Node* &tail,int d){
         Node* temp=new Node(d);
         tail->next=temp;
         temp->prev=tail;
         tail=temp;
         



    }
    void insertPostion(Node* tail,Node* &head ,int postion ,int d){
        if (postion==1)
        {
            insertAthead(head,d);
            return;
        }
        Node* temp=head;
        int cnt=1;
        while (cnt<postion-1)
        {
           temp=temp->next;
           cnt++;
        }
        if(temp->next==NULL){
            inserAtTail(tail,d);
        }
        Node* nodetoinsert=new Node(d);

        nodetoinsert->next=temp->next;
        temp->next->prev=nodetoinsert;
        temp->next=nodetoinsert;
        nodetoinsert->prev=temp;


        
        
    }
int getLenght(Node* head){
    int len=0;
      Node*temp=head;
        while (temp!=NULL)
        {len++;
           
            temp=temp->next;
        }

return len;
}


void deleteNode(int postion ,Node* &head){
    if (postion==1)
    {
        Node* temp=head;
        temp->next->prev=NULL;
        head=temp->next;
        temp->next=NULL;
        delete temp;

    }
    else{
        Node* curr=head;
        Node*prev=NULL;
        int cnt=1;

        while (cnt<postion)
        {
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
    Node* node1=new Node(10);
    Node* head=node1;
    Node* tail=node1;
   
 insertAthead(head,12);
 

 inserAtTail(tail,56);

 insertPostion(tail,head,2,90);
 print(head);
cout<<getLenght(head)<<endl;
deleteNode(2,head);
 print(head);
    
}