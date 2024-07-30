#include<iostream>
#include<stack>
using namespace std;

int main(){
    stack<string> s;
    s.push("roope");
    s.push("kumar");
    s.push("k");

    cout<<"top element of stack : "<<s.top()<<endl;
    cout<<"size of stack : "<<s.size()<<endl;
}