#include<iostream>
using namespace std;

int main(){

    int arr[10]={7,2,90,12,4,1,9,2,12,78};


    for(int i=0;i<10;i++){
        for(int j=0;j<10-i;j++){
            if(arr[j]>arr[j+1]){
                int temp =arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }

for(int i=0;i<10;i++){
  cout<<arr[i]<<" ";
    }



}