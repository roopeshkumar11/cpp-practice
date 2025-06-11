#include<iostream>
#include<queue>
using namespace std;

void smallestkelement(int arr[],int k,int size){

    priority_queue<int>heap;

    for(int i=0;i<k;i++){
        heap.push(arr[i]);
    }

    for(int i=k;i<size;i++){
        if(arr[i]<heap.top()){
            heap.pop();

            heap.push(arr[i]);
        }
    }
cout<<" k smallest element : "<<heap.top();
    
}
int main(){
//     int arr[6]={7,10,4,3,20,15};
//     int n=5;
// int k=3;
// smallestkelement(arr,k,n);

int arr[7]={5,6,1,7,9,0};

int n=7;
int k=3;
smallestkelement(arr,k,n);

}