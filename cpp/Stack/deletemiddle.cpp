#include<iostream>
#include<stack>
#include<vector>
using namespace std;


void deletemiddle(stack<int> &num,int size){
    int miidle=size/2;

    stack<int>ans;
int count=0;
    while (!num.empty()){
        if (count==miidle)
        { 
            num.pop();
            count++;
            
        }
        else{
         ans.push(num.top());
         num.pop();
         count++;
        }
        
    }

     while (!ans.empty()){
        num.push(ans.top());
        ans.pop();
    }
}
   
    

int main(){

    stack<int> num;
    num.push(3);
    num.push(9);
    num.push(1);
    num.push(2);
    num.push(3);
    num.push(5);

    int size=num.size();
    deletemiddle(num,size);


    while(!num.empty()){
        cout<<num.top()<<endl;
        num.pop();

    }

cout<<endl;


  

}