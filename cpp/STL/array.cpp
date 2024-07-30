#include<iostream>
#include<array>
using namespace std;
int main(){
    array<int ,4> a={1,2,34,6};
    int size=a.size();

    for (int i = 0; i < size; i++)
    {
        cout<<a[i]<<endl;
    }

    cout<<"Element of 2nd Index "<<a.at(2)<<endl;
    cout<<"Empty or not "<<a.empty()<<endl;
    cout<<"first element "<<a.front()<<endl;
     cout<<"last elementn "<<a.back()<<endl;

    
}
