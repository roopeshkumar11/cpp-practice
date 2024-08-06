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
    Node* sortlist(Node* head){
    Node* temp=head;
    int countZero=0;
    int countOne=0;
    int counttwo=0;

    while (temp!=NULL)

    {
        if (temp->data==0)

        {
            countZero++;
        }
        else if(temp->data==1){
            countOne++;

        }

        else{
            counttwo++;
        }
   temp=temp->next;
    }
  
  temp=head;
    while (temp!=NULL)
    {
        if (countZero!=0)
        {
         temp->data=0;
         countZero--;
        }

        else if(countOne!=0){
            temp->data=1;
            countOne--;

        }
 
        else{
            temp->data=2;
            counttwo--;
        }
       temp=temp->next; 
    }
    
    return head;


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
    Node* head=new Node(1);
    head->next=new Node(2);
     head->next->next=new Node(0);
    head->next->next->next=new Node(0);
     head->next->next->next->next=new Node(2);
       head->next->next->next->next->next=new Node(1);
    cout<<"Before sorted"<<endl;
      print(head);
   sortlist(head);
   cout<<"after sorted"<<endl;
      print(head);

}
