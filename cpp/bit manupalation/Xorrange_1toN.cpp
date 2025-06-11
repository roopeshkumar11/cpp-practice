#include<iostream>   //print all xor in from range 1 to n;
using namespace std;

int rangeXor(int n){
    if(n%4==1){
        return 1;
    }

    else if(n%4==2){
        return n+1;
    }

    else if(n%4==3){
        return 0;
    }

    else{
        return n;
    }

  
}
int main(){

    cout<<rangeXor(6);

}