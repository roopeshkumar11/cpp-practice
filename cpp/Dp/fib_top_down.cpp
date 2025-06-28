#include<iostream>   // using top down recursion + memorization
#include<vector>
using namespace std;

int fib(int n,vector<int>&dparray){
    if(n<=1){
        return n;
    }

    if(dparray[n]!=-1){
        return dparray[n];
    }

    dparray[n]=fib(n-1,dparray)+fib(n-2,dparray);
    return dparray[n];
}
int main(){
    cout<<"enter value ";
    int n;
    cin>>n;

    vector<int>dparray(n+1,-1);
cout<<fib(n,dparray);
}