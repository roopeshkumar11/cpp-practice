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


int lenght(Node* head){
      int cnt=0;
    Node*temp=head;


    while (temp!=NULL)
    {
        cout<<temp->data<<endl;
        temp=temp->next;
        cnt++;

    }
    return cnt;
}

Node* middle(Node* head){
   
        int len=lenght(head);
        cout<<"node lenght "<<len<<endl;
        int middle=len/2;
          Node*temp=head;
       for (int i = 0; i <middle; i++)
       {
        temp=temp->next;
       }
       
        return temp;
    }
    

int main(){

    Node *head=new Node(4);
    head->next=new Node(9);
    head->next->next=new Node(7);
    head->next->next->next=new Node(5);
    head->next->next->next->next=new Node(12);
        head->next->next->next->next->next=new Node(2);

    Node*temp=head;

  Node* m=middle(head);

  if (m!=NULL)
  {
   cout<<"middle elment"<<m->data<<endl;
  }
  else{
    cout<<"node is empty"<<endl;
  }
    



}