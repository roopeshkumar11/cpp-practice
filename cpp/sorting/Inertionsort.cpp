#include<iostream>
using namespace std;
int main(){
    int arr[10]={7,2,90,12,4,1,9,2,12,78};

    for(int i=1;i<10;i++){
        int curr=arr[i];
        int j=i-1;

 while(curr<arr[j] && j>=0){
  arr[j+1]=arr[j];
  j--;
        }


        arr[j+1]=curr;
       
    }
    for(int i=0;i<10;i++){
        cout<<arr[i]<<" ";
          }

}