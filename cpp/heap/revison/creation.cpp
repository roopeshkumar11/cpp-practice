#include<iostream>
using namespace std;


class heap{
    public:
    int arr[100];
    int size;

    heap(){
        arr[0]=-1;
        size=0;

    }


    void insert(int data){
        size=size+1;
        int indx=size;
        arr[indx]=data;

   

    while(indx>1){
        int parent=indx/2;
        if(arr[indx]>arr[parent]){
            swap(arr[indx],arr[parent]);
            indx=parent;
        }

        else{
            return;
        }
    }

    }

    void print(){
        for (int i = 1; i <= size; i++)
        {
            cout<<arr[i]<<endl;
        }
        
    }


    void deletefrom(){
        if(size==0){
            return;
        }

        arr[1]=arr[size];
        size--;
  int i=1;
        while(i<size){
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
                return ;
            }
        }
    }
};
int main(){

    heap h;
    h.insert(50);
    h.insert(55);
    h.insert(53);
    h.insert(52);
    h.insert(54);
    h.print();


    cout<<"after deletion"<<endl;
    h.deletefrom();
    h.print();
}