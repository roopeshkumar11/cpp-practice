#include<iostream>
using namespace std;

int bin_to_decimal(string s){
    int len=s.length()-1;
    int num=0;
    int p=1;


    for(int i=len;i>=0;i--){
        if(s[i]=='1'){
            num+=p;

        }
        p=p*2;


    }

    return num;
}

int main(){
     string  str="1101";

     cout<<"Binary: "<<str<<" to decimal :"<<bin_to_decimal(str);

   
}