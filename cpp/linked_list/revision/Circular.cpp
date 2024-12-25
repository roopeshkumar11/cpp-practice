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

    ~Node(){
        int val=this->data;

        if(this->next!=NULL){
           delete next;
           next=NULL;
        }

        cout<<"Memory free ";
    }
};
void insertNode(Node* &tail,int element,int d){
    if(tail==NULL){
        Node*newnode=new Node(d);
        tail=newnode;
        newnode->next=newnode;
    }

    else{
        Node*curr=tail;
        while (curr->data!=element)
        {
           curr=curr->next;
        }

        Node*temp=new Node(d);

        temp->next=curr->next;
        curr->next=temp;

        
    }
}
void print(Node* &tail){
    Node*temp=tail;

    if(tail==NULL){
        cout<<"List empty "<<endl;
    }

    do
    {
        cout<<tail->data<<" ";
        tail=tail->next;

    } while (tail!=temp);
    cout<<endl;
    
}

void deletenode(Node*tail,int element){

    if(tail==NULL){
    cout<<"List Empty ";
    }
    else{
    Node*prev=tail;
    Node*curr=tail->next;


    while (curr->data!=element)
    {
        prev=curr;
        curr=curr->next;

    }


    prev->next=curr->next;


// 1 one node
    if(curr==prev){
        tail=NULL;
    }

// 2 node 

    
    else if(tail==curr){
        tail=prev;
    }
    curr->next=NULL;
    delete curr;
    
    }

}

int main(){
    Node*tail=NULL;
    insertNode(tail,5,3);
    print(tail);

    insertNode(tail,3,5);
    print(tail);
     insertNode(tail,3,6);
      print(tail);
      insertNode(tail,5,6);
      print(tail);
deletenode(tail,5);
print(tail);

deletenode(tail,6);
print(tail);
}