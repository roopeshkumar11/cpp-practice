#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node*next;
    Node(int d){
    this->data=d;
    this->next=NULL;
    };
};


void revrese_left_right(Node* head ,int right, int left){

    Node*curr=head;

    while(curr!=NULL){
        if(curr->data==right){
            curr->next->next=curr;
           curr= curr->next->next;
        }
    }
    curr=curr->next;
 
    cout<<"check";
}

void print(Node* head){
    Node*curr=head;
    while(curr!=NULL){
        cout<<curr->data;
        curr=curr->next;
    }
}
int main(){
 Node* head=new Node(2);
    head->next=new Node(9);
      head->next->next=new Node(1);

    head->next->next->next=new Node(6);
     head->next->next->next->next=new Node(6);

     revrese_left_right(head,9,6);
     print(head);
}