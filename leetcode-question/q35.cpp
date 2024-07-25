#include<iostream>
using namespace std;
int main(){
    int a,target,temp;
    cout<<"enter size of array";
    cin>>a;
        cout<<"enter target";
        cin>>target;
    int arr[a];
    for (int i = 0; i < a; i++)
    {
        cin>>arr[i];
    }

    for (int i = 0; i < a; i++)
    {
        if (arr[i]==target)
        {
         cout<<"index find"<<" "<<i;
         break;
        }
        else if(arr[i]!=target){
            if (arr[i]>target)
            {
                arr[i-1]=target;
                cout<< arr[i-1]<<"outside";
              
               
            }  

          
        }
         
    }

    for (int i = 0; i <a+1; i++)
    {
        cout<<arr[i];
    }
    
    
    
}