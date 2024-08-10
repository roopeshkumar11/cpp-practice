#include<iostream>
using namespace std;

class Stack{
    public:
    int size;
    int *arr;
    int top;

    Stack(int size){
        this->size=size;
         arr =new int[size];
         top=-1;


    }

    void push(int element){
        if(size-top>=1){
            top++;
            arr[top]=element;
        }

        else{
            cout<<"stack is overflow";
        }
    }


    void  pop(){
        if (top>=0)
        {
            top--;
        }
        
       
        
    }
    int peek(){

        if (top>=0)
        {
            return arr[top];
        }
        else{
            cout<<"stack is empty";
        }
        
        
    }


    bool empty(){
        if(top==-1){
           return true;
        }
        else{
           return false;
        }
    }

};
int main(){

    Stack st(5);
    st.push(8);
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    cout<<"top element "<<st.peek()<<endl;

    st.pop();
    cout<<"top element "<<st.peek()<<endl;
    st.pop();
    st.pop();
    st.pop();
      st.pop();
    
    if(st.empty()){
        cout<<"stack is empty"<<endl;
    }

    else{
        cout<<"stack is not empty"<<endl;
    }



}