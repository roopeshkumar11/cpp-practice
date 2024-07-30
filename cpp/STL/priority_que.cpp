#include<iostream>
#include<queue>
using namespace std;
int main(){
    priority_queue<int> maxi;
    priority_queue<int ,vector<int> ,greater<int> >mini;

    maxi.push(1);
    maxi.push(2);
    maxi.push(3);
     maxi.push(4);
    maxi.push(5);
    maxi.push(6);

    cout<<"size of queue :"<<maxi.size()<<endl;
    int size_max=maxi.size();
    for (int i = 0; i <size_max; i++)
    {
        cout<<maxi.top()<< " ";
        maxi.pop();
    }cout<<endl;
    


   mini.push(1);
    mini.push(2);
    mini.push(3);
     mini.push(4);
    mini.push(5);
    mini.push(6);


    int size=mini.size();
    for (int i = 0; i <size; i++)
    {
        cout<<mini.top()<< " ";
        mini.pop();
    }cout<<endl;
}