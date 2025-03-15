#include<iostream>
using namespace std;


int main(){
    int i=2;
    int nums=13;


    int ans= nums & ~(1<<i);

    cout<<ans;

}