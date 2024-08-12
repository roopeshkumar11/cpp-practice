#include<iostream>
#include<stack>
using namespace std;


void sortinsert(stack<int> &s,int top){
if(s.empty()|| !s.empty() && s.top()<top){
    s.push(top);
    return;
}

int n=s.top();
s.pop();

sortinsert(s,top);
s.push(n);



}

void sort(stack<int>&s){
    if(s.empty()){
        return;
    }

    int top=s.top();
    s.pop();

    sort(s);
    sortinsert(s,top);
   
    }
int main(){



stack<int>s;
s.push(8);
s.push(-1);
s.push(309);
s.push(2);
s.push(8);
s.push(81);
s.push(0);

sort(s);
cout<<"sorted stack " ;
while (!s.empty())
{
   cout<<s.top()<<endl;
   s.pop();
}


}