#include<iostream>
#include<stack>
using namespace std;


bool validParanth(string s){
    stack<int>st;
    for(int i=0;i<s.length();i++){
        if(s[i]=='['  || s[i]=='{' || s[i]=='('){
            st.push(s[i]);
        }
    if(st.empty()){
        return false;
    }

        else if(s[i]==']'  || s[i]=='}' || s[i]==')'){
            int top=st.top();
            if(top=='[' || top=='{' || top=='('){
                st.pop();
            }

            else{
                return false;
            }

        }

        else{
            return false;
        }
    }
}
int main(){

    string s="[[}[";

    bool ans=validParanth(s);


    if(ans){
        cout<<"Balanced";
    }

    else{
        cout<<"Unbalnaced";
    }

}