#include<iostream>
using namespace std;

class Nstack{

    public:
    int *arr;
    int *top;
    int *next;
  int n,s;
  int frreeshpot;

    Nstack(int N,int S){
        n=N;
        s=S;

        arr=new int[s];
        top=new int[n];
        next=new int[n];


        for (int i = 0; i <n; i++)
        {
            top[i]=-1;
        }

        for (int i = 0; i <s; i++)
        {
            next[i]=i+1;
        }
        next[s-1]=-1 ;

         frreeshpot=0;
        
        

    }


bool push(int x,int m){
    if(frreeshpot==-1){
        return false;
    }

    int index=frreeshpot;

    arr[index]=x;

    frreeshpot=next[index];
    next[index]=top[m-1];
    top[m-1]=index;

    return true;
}

int pop(int m){
    if(top[m-1]==-1){
        return -1;
    }

    int index=top[m-1];
    top[m-1]=next[index];
    next[index] =   frreeshpot;
        
          frreeshpot = index;
        
        return arr[index];

}
};

int main(){

}