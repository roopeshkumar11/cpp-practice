#include<iostream>
using namespace std;

bool sort(int arr[],int size){
    if(size==1 || size==0){
        return true;
    }
    if (arr[0]>arr[1])
    {
        
        return false;
    }
    
    else{
        bool ans=sort(arr+1,size-1);
        return ans;
    }
}
int main(){
   
    int arr[7]={2,3,51,57,90,101,102};

    bool ans=sort(arr,7);
   if (ans)
   {
    cout<<"array is sorting"<<endl;
   }
   else{
    cout<<"array is not shorting";
   }
   

}