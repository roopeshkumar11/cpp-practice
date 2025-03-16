//Remove last bit in right side;
#include<iostream>
using namespace std;
int main(){
    int num=40;


    int ans=num & num-1;
    cout<<ans;
}