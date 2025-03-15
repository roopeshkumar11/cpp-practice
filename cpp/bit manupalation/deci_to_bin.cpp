#include<iostream>
#include<algorithm>
using namespace std;

string decimal_to_binary(int num){
    string ans="";

    while(num>0){

        if(num%2==1){
            ans+='1';
        }
        else{
ans+='0';
        }

        num=num/2;
       

    }
    
    reverse(ans.begin(),ans.end());

    return ans;
}
int main(){


    int num=13;
    cout<<decimal_to_binary(num);

}