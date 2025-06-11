#include<iostream>
using namespace std;

void merge(int *arr,int s,int mid,int e){
   

    int n1=mid-s+1;
    int n2=e-mid+1;

    int arr1[n1];
    int arr2[n2];

    for(int i=0;i<n1;i++){
        arr1[i]=arr[s+i];
    }
 for(int i=0;i<n2;i++){
        arr2[i]=arr[mid+1+i];
    }
    int i=0;
    int j=0;
    int k=s;

    while(i<n1 && j<n2)
    {
        if(arr1[i]<=arr2[j]){
            arr[k]=arr1[i];
            i++;
        }
         else{
            arr[k]=arr2[j];
            j++;
        }
        k++;
    }

    while(n1>i){
        arr[k]=arr1[i];
        k++;
        i++;
    }
     while(n2>j){
        arr[k]=arr2[j];
        k++;
        j++;
    }
}

void Mergeshort(int *arr,int s,int e){
   

  
    if (s>=e)
    {
        return;
    }
    int mid=s+(s+e)/2;
    Mergeshort(arr,s,mid);
    Mergeshort(arr,mid+1,e);
 merge(arr, s, mid, e);
    
}


int main(){
    int arr[]={2,3,45,12,67,3,2,0};
    int n = sizeof(arr) / sizeof(arr[0]);

    Mergeshort(arr,0,n-1);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }


}