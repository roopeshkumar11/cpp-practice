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



bool check_circular(Node* head){
    if (head==NULL)
    {
       return true;
    }


    if (head->next==NULL)
    {
        return true;
        
    }

    Node*temp=head->next;
    while (head!=NULL && temp!=head )
    {
        temp=temp->next;
    }


    if (head==temp)
    {
        return true;
    }
    
    return false;
    
    
}
int main(){
    Node*head=new Node(9);
    head->next=new Node(9);
    // 
   
  
    if (check_circular(head))
    {
        cout<<"circular"<<endl;
    }

    else{
        cout<<"not circular"<<endl;
    }
    
}