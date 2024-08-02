#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int data) {
        this->data = data;
        this->next = NULL; // Initialize next to nullptr
    }

    //destructor
    ~Node(){
        int value=this->data;
       // memory free
        if (this->next!=NULL)
        {
            delete next;
            this->next=NULL;
        }

        cout<<"memmory free"<<endl;
        
    }
};


void insertAtHead(Node*& head, int d) {
    Node* temp = new Node(d);
    temp->next = head;
    head = temp;
}

void insertAtTail(Node*& tail, int d) {
    Node* temp = new Node(d);
    tail->next = temp;
    tail = tail->next;
}

void insertatmiddle(Node* &tail,Node* &head, int position ,int d){
    if (position==1)
    {
        insertAtHead(head,d);
        return;
    }

    
    Node *temp=head;

    int cnt=1;
    while (cnt<position-1)
    {
        temp=temp->next;
        cnt++;
    }
    if (temp->next==NULL)
    {
        insertAtTail(tail,d);
        return;
    }
    
    Node* nodeinsert=new Node(d);
    nodeinsert->next=temp->next;
    temp->next=nodeinsert;
    
}





void print(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

void deletenode(int position,Node* &head){
    if (position==1)
    {
       
       Node* temp=head;
       head=head->next;
       temp->next=NULL;
       delete temp;
    }
    else{
        Node* curr=head;
        Node*prev=NULL;
        int cnt=1;
        while (cnt<position)
        {
            prev=curr;;
            curr=curr->next;
            cnt++;
        }
        prev->next=curr->next;
        curr->next=NULL;
        delete curr;
        
    }
    
}

int main() {
    Node* node1 = new Node(10);
    cout << node1->data << endl;
    cout << node1->next << endl;

    Node* head = node1;
    Node* tail = node1;

    insertAtHead(head, 12);
    print(head);

    insertAtTail(tail, 89);
    print(head);

    insertatmiddle(tail,head,2,22);
    print(head);
    deletenode(4,head);
    print(head);

    return 0;
}
