#include<iostream>
using namespace std;
int main(){
    

    int a;
    cout<<"size of array";
    cin>>a;
    int  arr[a],final[a];
    int r;
    cout<<"remove elemet";
    cin>>r;
    cout<<"enter array elment";
    for (int i = 0; i < a; i++)
    {
        
        cin>>arr[i];
    }

    for (int i = 0; i < a; i++)
    
    {
        if (arr[i]!=r)
        {
            final[i]=arr[i];
            cout<<final[i]<<",";
        }
   
   
        
    }
    
    
}