#include<iostream>
#include<queue>
using namespace std;

int mincost(int arr[],int n){
    priority_queue<int,vector<int>,greater<int>>q;

    for(int i=0;i<n;i++){
        q.push(arr[i]);
    }
   
int ans=0;
while(q.size()>1){
    int a=q.top();
    q.pop();
    int b=q.top();
    q.pop();
int sum=a+b;
    q.push(sum);
    ans+=sum;
}
cout<<ans;

}

int main(){
int arr[4]={4,3,2,6};
mincost(arr,4);
}


