#include<iostream>
#include<queue>  //using predifine heap in priority queue
using namespace std;


class Heap{


    public:
    int arr[100];
    int size;

    Heap(){
        arr[0]=-1;
        size=0;
    }


void insert(int val){
    size=size+1;

    int index=size;

    arr[index]=val;
    while (index>1)

    {
        int parent=index/2;
       if(arr[parent]<arr[index]){
        swap(arr[parent],arr[index]);
        index=parent;
       }

       else{
        return;
       }
    }
    
}

void print(){
    for (int i = 1; i <=size; i++)
    {
        cout<<arr[i]<<" ";
    }cout<<endl;
    
}
void delheap(){
    if(size==0){
        cout<<"nothing element";
    }

    arr[1]=arr[size];
    size--;

    int i=1;

    while (i<size)


    {
        int left=2*i;
        int right=2*i+1;
         if(left<size && arr[i]<arr[left]){
            swap(arr[i],arr[left]);
            i=left;
         }

         else if(right<size && arr[i]<arr[right]){
            swap(arr[i],arr[right]);
            i=right;
         }

         else{
            return;
         }
    }
    
}


};

void heapify(int arr[],int n,int i){
    int largest=i;
    int left=2*i;
    int right=2*i+1;

    if(left<=n && arr[largest]<arr[left]){
        largest=left;
    }

     if(right<=n && arr[largest]<arr[right]){
        largest=right;
    }


    if(largest!=i){
        swap(arr[largest],arr[i]);
        heapify(arr,largest,n);
    }

}

void heapsort(int arr[],int n){  //sorting
    int size=n;


    while(size>1){
        swap(arr[1],arr[size]);
        size--;

        heapify(arr,size,1);
    }
}

int main(){

    Heap h;
    h.insert(50);
     h.insert(55);
    h.insert(53);
    h.insert(52);
    h.insert(54);
    cout<<"befor deletion"<<endl;
    h.print();
 cout<<"after deletion"<<endl;
    h.delheap();
 h.print();



int arr[6]={-1,54,53,55,52,50};
int n=5;
 for(int i=n/2;i>0;i--){
    heapify(arr,n,i);

 }

 cout<<"print array now"<<endl;

 for(int i=1;i<=n;i++){
    cout<<arr[i]<<" ";
 }
cout<<endl;


cout<<"soritng heapify "<<endl;
heapsort(arr,n);

 for(int i=1;i<=n;i++){
    cout<<arr[i]<<" ";
 }
cout<<endl;



 cout<< "Using Priority "<<endl;

//  priority_queue is mxheap


priority_queue<int>q;


q.push(4);
q.push(2);
q.push(5);
q.push(3);

cout<<"element of top "<<q.top()<<endl;
cout<<"size of :"<<q.size();

//creation min heap

cout<<"using min heap"<<endl;
priority_queue<int,vector<int>,greater<int>>minheap;
minheap.push(4);
minheap.push(2);
minheap.push(5);
minheap.push(3);

cout<<"element of top "<<minheap.top()<<endl;
cout<<"size of :"<<minheap.size();

}