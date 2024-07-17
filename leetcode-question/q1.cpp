#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"enter size";
    cin>>a;
    int target,arr[a],sum=0;
    cout<<"enter target";
    cin>>target;
cout<<"enter the elment array";
    for (int i = 0; i < a; i++)
    {
        cin>>arr[i];

    }

    for (int i = 0; i < a-1; i++)

   {
    
        for (int j= i+1; j < a; j++)
        {
           
        
       
       
        if(arr[i]+arr[j]==target)
        {
            
            cout<<"sum of elment find index"<<i<<" and "<<j<<endl;
            break;
        }

       
       
        }
    }
    
    
}