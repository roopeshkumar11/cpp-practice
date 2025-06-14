#include<iostream>

#include<vector>
#include<algorithm>
#include<unordered_map>
using namespace std;



void dfs(int node,int &timer,vector<int>&disc,vector<int>&low,int &parent,unordered_map<int,bool>&visited, vector<int>&ap,unordered_map<int ,vector<int>>&adj){

    visited[node]=true;
    disc[node]=low[node]=timer++;



int child=0;
    for(auto nbr:adj[node]){
        if(node==parent){
            continue;
        }


        if(!visited[nbr]){
            dfs(nbr,timer,disc,low,node,visited,ap,adj);

            low[node]=min(low[node],low[nbr]);
            if(low[nbr]>= disc[node] && parent!=-1){
                ap[node]=1;
            }
            child++;
        }

        else{
            low[node]=min(low[node],disc[nbr]);
        }
    }

    if(parent==-1 && child>1){
        ap[node]=1;
    }
}

int main(){

    int n=5;
    int e=5;

    vector<pair<int,int>>edges;
    edges.push_back({0,3});
    edges.push_back({3,4});
    edges.push_back({0,4});
    edges.push_back({0,1});
    edges.push_back({1,2});
 

    unordered_map<int ,vector<int>>adj;
    for(int i=0;i<edges.size();i++){
        int u=edges[i].first;
        int v=edges[i].second;

        adj[u].push_back(v);
        adj[v].push_back(u);
    }



    int timer=0;
    vector<int>disc(n);
    vector<int>low(n);
    int parent=-1;
    unordered_map<int,bool>visited;

    vector<int>ap(n,0);


    for(int i=0;i<n;i++){
        disc[i]=-1;
        low[i]=-1;

    }




    for(int i=0;i<n;i++){
        if(!visited[i]){
            dfs(i,timer,disc,low,parent ,visited,ap,adj);
        }
    }

cout<<"articulation point"<<" ";
for(int i=0;i<n;i++){
   if(ap[i]!=0){
    cout<<i<<" ";
   }
   
}

}