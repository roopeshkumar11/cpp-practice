#include<iostream>
using namespace std;

void sort(int arr[],int a){
    int temp;
    for (int i = 0; i < a-1; i++)
    {
    
    
    for(int j=0;j<a-i-1;j++){
       
        if (arr[j]>arr[j+1])
        {
           temp=arr[j];

           arr[j]=arr[j+1];
           arr[j+1]=temp;
          

        }
        
    }
    }
   
}

int main(){
    int a,final;
    cout<<"size of array";
    cin>>a;
    int arr[a];
    for (int i = 0; i < a; i++)
    {
        cin>>arr[i];
    }

    sort(arr,a);

 for (int i = 0; i < a; i++){
    if (arr[i]!=arr[i+1])
            {
               final=arr[i];
               cout<<"Sorting with removing duplicate element "<<" " <<final<<endl;
               
            }

            else{
              cout<<"error";
            }
           
          
          
   
        
    }
         
      
}