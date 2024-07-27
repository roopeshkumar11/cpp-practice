#include<iostream>
using namespace std;


int partition(int arr[],int s, int e){
    int pivot=arr[s];
    int count=0;
    for (int i = s+1; i <=e; i++)
    {
        if (arr[i]<=pivot)
        {
            count++;
        }
        
    }

    int pivotindex=s+count;
    swap(arr[pivotindex],arr[s]);

int i=s,j=e;
while (i<pivotindex && j>pivotindex)
{
    while (arr[i]<=pivot)
    {
        i++;
    }
    while (arr[j]>pivot)
    {
    j--;
    }
    if (i<pivotindex && j>pivotindex)
    {
        swap(arr[i++],arr[j--]);
    }
    
    
    
}
return pivotindex;


    
}



void quickshort(int arr[],int s,int e){
    if (s>=e)
    {
      return;
    }

    int p= partition(arr,s,e);
    quickshort(arr,s,p-1);
    quickshort(arr,p+1,e);
    
}
int main(){
    int arr[]={4,2,5,61,23,12,90,10019,123,90};
    int n=10;
    quickshort(arr,0,n-1);
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<endl;
    }
   

}