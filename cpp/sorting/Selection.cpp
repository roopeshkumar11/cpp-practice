#include<iostream>
using namespace std;
int main(){
    int arr[10]={7,2,90,12,4,1,9,2,12,78};

    for(int i=0;i<9;i++){
        for(int j=i+1;j<10;j++){
            if(arr[i]>arr[j]){
                int temp=arr[j];
                arr[j]=arr[i];
                arr[i]=temp;
            }
        }
    }

    for(int i=0;i<10;i++){
        cout<<arr[i]<<endl;
    }
}