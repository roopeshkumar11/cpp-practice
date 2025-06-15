#include<iostream>
using namespace std;


int partion(int arr[],int s,int e){
    int pivot=arr[s];
    int len = e - s + 1;

    int cnt=0;

    for(int i=s;i<=e;i++){
        if(arr[i]<pivot){
            cnt++;
        }
    }



    int pivotidx=cnt+s;


    swap(arr[pivotidx],arr[s]);

    int i=s;
    int j=e;

    while(i<pivotidx && j>pivotidx){

        while(arr[i]<pivot){
            i++;
        }

        while(arr[j]>pivot){
            j--;
        }
        if(i<pivotidx && j>pivotidx){
            swap(arr[i++],arr[j--]);
        }
    }

    return pivotidx;


}


void quickshort(int arr[],int s,int e){
    if(s>=e){
        return;
    }


    int p=partion(arr,s,e);

    quickshort(arr,s,p-1);
    quickshort(arr,p+1,e);
}





int main(){

    int arr[4]={2,1,10,6};

    quickshort(arr,0,3);

    for(int i=0;i<4;i++){
        cout<<arr[i]<<" ";
    }

}