#include<iostream>
#include<queue>
using namespace std;
int main(){
    queue<int>q;
    q.push(5);
        q.push(6);
     q.push(7);
   q.push(5);
  q.push(5);
 q.push(51);
 cout<<"Size of queue "<<q.size()<<endl;
  cout<<"front of queue "<<q.front()<<endl;
 q.pop();
 cout<<"Size of queue "<<q.size()<<endl;
  cout<<"front of queue "<<q.front()<<endl;
 cout<<"rare of queue "<<q.back()<<endl;
}