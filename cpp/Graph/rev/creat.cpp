#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;

class graph{
    public:
    unordered_map<int,vector<int>>adj;



    void addedge(int v,int u,bool direction){

        adj[v].push_back(u);

        if(direction==0){
            adj[u].push_back(v);
        }

    }



    void print(){
        for(auto i:adj){
            cout<<i.first<<"->";


            for(auto j:i.second){
                cout<<j<<" ";
            }
            cout<<endl;
        }
    }
};
int main(){


    int m;
    cout<<"enter no of node"<<endl;
    cin>>m;

    int n;
    cout<<"enter  no of edge";
    cin>>n;

graph g;

    for(int i=0;i<n;i++){
        int u,v;
        cin>>u>>v;
        g.addedge(u,v,1);

    }

    g.print();

}