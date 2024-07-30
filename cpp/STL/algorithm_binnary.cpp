#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    vector<int> v;
    v.push_back(1);
       v.push_back(3);
          v.push_back(5);
             v.push_back(6);


             cout<<"find 5 "<<binary_search(v.begin(),v.end(),6)<<endl;

cout<<"lower_bound "<<lower_bound(v.begin(),v.end(),5)-v.begin()<<endl;
cout<<"upper_bound "<<upper_bound(v.begin(),v.end(),5)-v.begin()<<endl;


int a=10;
int b=90;

cout<<"max element is :"<<max(a,b)<<endl;
cout<<"min element is :"<<max(a,b)<<endl;
swap(a,b);
cout<<"a element is :"<<a<<endl;


string rt="abcde";
reverse(rt.begin(),rt.end());
cout<< "string "<< rt<<endl;
}