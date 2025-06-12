#include<iostream>   
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

int bothxor(int start ,int end){
    return rangeXor(start-1)^rangeXor(end);
}
int main(){

    cout<<bothxor(4,6);

}