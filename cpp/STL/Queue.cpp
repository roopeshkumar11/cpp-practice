#include<iostream>
#include<queue>
using namespace std;
int main(){
    queue<string> q;
    q.push("hii");
    q.push("hello");
    q.push("heyy");

    cout<<"Size of elment: "<<q.size()<<endl;

    q.pop();
     cout<<"Size of elment after pop: "<<q.size()<<endl;

       cout<<"first of elment : "<<q.front()<<endl;

}