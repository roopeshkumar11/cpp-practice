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
Node* linkedresverse(Node* head){
Node* curr=head;
Node* prev=NULL;
Node* forward=NULL;
while (curr!=NULL)

{
    forward=curr->next;
    curr->next=prev;
    prev=curr;
    curr=forward;

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

    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);
   
  
    print(head);
    head=linkedresverse(head);
    
    print(head);




}