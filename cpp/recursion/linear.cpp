#include<iostream>
using namespace std;
bool linear(int arr[],int size,int target){
if (size==0)
{
    return false;
}

if (arr[0]==target)
{
    return true;
}
else{

 bool ans=linear(arr+1,size-1,target);
 return ans;}


}
int main(){
    int size=5;
    int arr[]={1,2,45,6};
   bool final= linear(arr,size,7);

   if (final)
   {
    cout<<"find";
   }
   else{
    cout<<"not find";
   }
   
}