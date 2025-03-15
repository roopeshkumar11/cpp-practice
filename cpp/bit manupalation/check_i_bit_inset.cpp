#include<iostream>
using namespace std;
int main(){
    int i=3;

    int nums=9;

    if(nums & ((1<<i)!=0)){
        cout<<"present";
    }
    else{
        cout<<"not present";
    }

   
}