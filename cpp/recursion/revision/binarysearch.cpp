#include<iostream>
using namespace std;

int found(int arr[],int target,int low,int high){

   if(low>high){
    return -1;
   }

    int mid=low+(high-low)/2;

    if(arr[mid]==target){
        return mid;
    }
    
   if(arr[mid]>target){
    return found(arr,target,low,mid-1);
   }

   else{
    return found(arr,target,mid+1,high);
   }

 
}
int main(){

    int arr[5]={1,2,3,4,5};


   int ans= found(arr,9,0,4);

   cout<<ans;

}