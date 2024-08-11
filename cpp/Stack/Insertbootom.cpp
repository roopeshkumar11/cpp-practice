#include<iostream>
#include<stack>
using namespace std;


void insertat(stack<int>s,int num){

    if(s.empty()){
        s.push(num);
        return;
    cout<<"hello 1"<<s.top()<<endl;

    }

    int top=s.top();
    s.pop();

    insertat(s,num);
    s.push(top);

  
}
int main(){
    stack<int>s;
    s.push(4);


    s.push(5);
    s.push(6);
    s.push(7);
    s.push(480);
        s.push(0);

        insertat(s,600);



        while (!s.empty())
            {
            cout<< s.top()<< " ";
            s.pop();
                
            
            }
          



}