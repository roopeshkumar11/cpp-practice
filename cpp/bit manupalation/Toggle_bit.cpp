#include<iostream>
using namespace std;
int main(){
    int i=1;
    int nums=10;

    int ans=nums ^ (1<<i);

    cout<<ans;

}