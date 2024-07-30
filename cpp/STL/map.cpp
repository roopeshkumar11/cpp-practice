#include<iostream>
#include<map>
using namespace std;
int main(){

    map<int,string> a;
    a[9]="roop";
    a[1]="kumar";
    a[0]="ku";

    a.insert({5,"bheem"});

    cout<<"before erase "<<endl;
    for(auto i:a){
        cout<<i.first<<" "<<i.second<<endl;
    }

    cout<<"finding elemnet "<<a.count(0)<<endl;

}