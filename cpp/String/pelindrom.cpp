#include<iostream>

using namespace std;


bool pelindrom(string s){

    int start=0;
    int end=s.length()-1;


    while(start<end){
        if(s[start]==s[end]){
            
            start++;
            end--;
            return true;
        }
         return false;
    }
   
}

int main(){

    string s="levelssd";

    bool ans=pelindrom(s);


    if(ans){
cout<<"pelindrom";
    }

    else{
        cout<<" not pelindrome";
    }

}