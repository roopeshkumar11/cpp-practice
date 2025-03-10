#include<iostream>
using namespace std;

class Stack{
    public:
    int top;
    int size;
    int *arr;

    Stack(int size){
        this->size=size;
        arr=new int[size];
        top=-1;

    }



void push(int element){
    if(size-top>1){
        top++;

        arr[top]=element;
    }

    else{
        cout<<"stack is overflow"<<endl;
    }
}

void pop(){
    if(top>=1){
        top--;
    }

    else{
        cout<<"stack is empty"<<endl;
    }
}

int peek(){
    if(top>=0){
        return  arr[top];
    }

    else{
        cout<<"Stack is empty "<<endl;
        return -1;

    }
}


bool Empty(){
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

st.push(6);
st.push(5);
st.push(2);
st.push(1);
st.push(7);

 cout<<st.peek()<<endl;
 st.pop();
  st.pop();

 cout<<st.peek()<<endl;

if(st.Empty()){
    cout<<"stack is empty"<<endl;
}

else{
    cout<<"Stack is not "<<endl;
}

 
}