#include<iostream>
using namespace std;
int main(){
    string bracket;
    cout<<"enter the bracket";
    cin>>bracket;
    if(bracket=="()" || bracket=="{}" || bracket=="[]"  ){
        cout<<"true";
    }

    else{
        cout<<"false";
    }

}