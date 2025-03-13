#include<iostream>
using namespace std;

bool sortedcheck(int arr[],int n,int idx){
    if(n-1==idx){
        return true;
    }


    return arr[idx]>=arr[idx-1] &&  sortedcheck(arr,n,idx+1);
        
    

   

}
int main(){

    int n;
cout<<"anter size of array"<<endl;
cin>>n;

int arr[n];

cout<<"enter the elmenet in array"<<endl;
for(int i=0;i<n;i++){
    cin>>arr[i];
}

    bool ans=sortedcheck(arr,5,1);
    if(ans){
        cout<<"sortred";
    }

    else{
        cout<<"not sorted";
    }

}