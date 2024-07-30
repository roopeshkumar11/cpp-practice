#include<iostream>
#include<set>
using namespace std;
int main(){
    set<int>s;

    s.insert(11);
     s.insert(12);
      s.insert(13);
      s.insert(15);
     s.insert(1);
      s.insert(16);


      for(int i:s){
        cout<<"elemet "<<i<<endl;
      }


      s.erase(s.begin());
       for(int i:s){
        cout<<" after erase element "<<i<<endl;
      }


      cout<<"count of elment "<<s.count(15)<<endl;


      set<int>::iterator itr=s.find(15);
      
}