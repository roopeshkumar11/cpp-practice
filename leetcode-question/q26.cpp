// remove duplicate digit
#include<iostream>

using namespace std;
int main(){
    int a;
    cout<<"enter sise of array";
    cin>>a;
    cout<<"enter elment of array";
        int arr[a],final[a];

    for (int i = 0; i < a; i++)
    {
        
        cin>>arr[i];

    }
    for (int i = 0; i < a; i++)
    {
        
            if (arr[i]!=arr[i+1])
            {
                final[i]=arr[i];
                    cout<<final[i]<<" ";
               
            }
            
            

             
            
        

   
        
    }
    
    
}