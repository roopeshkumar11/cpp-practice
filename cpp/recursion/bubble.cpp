#include<iostream>
using namespace std;
int buubble(int arr[],int size){
    if (size==0 ||size ==1)
    {
        return 0;
    }

    for (int i = 0; i<size-1; i++)
    {
        if (arr[i]>arr[i+1])
        {
            swap(arr[i],arr[i+1]);
        }
        
    }

    buubble(arr,size-1);
    
    
}
int main(){

    int arr[5]={3,56,1,23,90};
   buubble(arr,5);
for (int i = 0; i <5; i++){


    cout<<" "<<arr[i];
}
    /* code */




}