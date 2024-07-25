#include<iostream>
using namespace std;

bool binary(int arr[],int s,int e ,int key){
    if (s>e)
    {
        return false;
    }
int mid=s+(e-s)/2;
    if (arr[mid]==key)
    {
      return true;
    }
     

   if (arr[mid]<key)
   {
    return binary(arr,mid+1,e,key);
   }
   else{
    return binary(arr,s,mid-1,key);
   }
   
    
    
}
int main(){

    int arr[5]={2,3,4,5,6};
   int final=binary(arr,0,4,2);

   if (final)
   {
  cout<<"prestnt";
   }
   else{
    cout<<" not present";
   }
   

}