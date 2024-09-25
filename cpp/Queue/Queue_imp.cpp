#include<iostream>
using namespace std;

class Queue{
    public:
    int *arr;
    int front;
    int rear;
    int size;

    
    Queue(){
        size=100001;
        arr=new int[size];
        front=0;
        rear=0;

    }


    bool isEmpty(){
        if(front==rear){
            return true;

        }

        else{
            return false;
        }
    }


    int enqueue(int data){
        if (rear==size)
        {
            cout<<"queue is full";
        }
        else{
            arr[rear]=data;
            rear++;
            
        }
        
    }

    int dequeue(){
        if (front==rear)
        {
            cout<<"queue is empty";
        }

        else{
            int ans=arr[front];
            arr[front]=-1;
            front++;
            if (front==rear)
            {
                front=0;
                rear=0;
            }
            return ans;
            

        }
        
    }
    int Qfront(){
        if (front==rear)
        {
            return -1;
        }

        else{
           return arr[front];
        }
        
    }


};
int main(){
    Queue q;
q.enqueue(5);
q.enqueue(6);
q.enqueue(7);
q.enqueue(8);
cout<<"front element "<<q.Qfront()<<endl;
cout<<"pop element "<<q.dequeue()<<endl;
cout<<"front element "<<q.Qfront()<<endl;
    
if(q.isEmpty()){
    cout<<"queue is empty"<<endl;
}

else{
      cout<<"queue  is not empty"<<endl;
}

}