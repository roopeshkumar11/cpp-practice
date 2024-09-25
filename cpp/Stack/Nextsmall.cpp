// find smallernext element
#include<iostream>
#include<stack>
#include<vector>   

using namespace std;

 void smaller(vector<int> &arr,int size){
    stack<int>s;
    s.push(-1);
    vector<int> ans(size);
    for (int i = size-1; i>=0; i--)

     
    {
     int curr=arr[i];
        while (s.top()>=curr)
        {
           s.pop();
        }
         ans[i]=s.top();
        s.push(curr);
        
    }


    for (int i = 0; i < ans.size(); i++)
{
    cout<<ans[i]<<" ";
}
    
 }

int main(){

vector<int> arr={2,1,4,3};

int size=arr.size();

smaller(arr,size);




}
