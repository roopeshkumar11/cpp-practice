#include<iostream>
#include<stack>
using namespace std;


void reverse(stack<int>&s){

    stack<int> final;

    if (s.empty()){
        return;
    }
     int  top= s.top();
     s.pop();

    reverse(s);
    final.push(top);

    cout<<top<< " "<<endl;

    
   

}
int main(){
     stack<int>s;
    s.push(4);


    s.push(5);
    s.push(6);
    s.push(7);
    s.push(480);
        s.push(0);
cout<<"top"<<s.top();
  reverse(s);



        

}