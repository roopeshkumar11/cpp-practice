#include<iostream>
#include<map>
#include<unordered_map>
using namespace std;


// map print order wise data;
// unordered_map print random wise data;
int main(){
    unordered_map<string,int>m;

    pair<string,int>p=make_pair("roopesh",3);
     m.insert(p);    // 1st methode insert

      pair<string,int>pair("jay",1);
     m.insert(pair);    // 2st methode insert

     m["ak"]=2   ;     // 3st methode insert
    
    cout<<m["ak"]<<endl;

    cout<<m.at("roopesh")<<endl;
    cout<<m.size()<<endl;
    cout<<m.count("roopesh")<<endl;

    m.erase("ak");

 cout<<"after remove size :"<<m.size()<<endl;



//  access all element


for(auto i:m){
    cout<<i.first<<" : "<<i.second<<endl;  // use for eack lopp
}

// using iterator

unordered_map<string,int>:: iterator it=m.begin();

while(it!=m.end()){
    cout<<it->first<<" : "<<it->second<<endl;
    it++;
}
}
