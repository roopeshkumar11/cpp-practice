#include<iostream>
using namespace std;
int main(){
    string bracket;
    cout<<"enter the bracket";
    cin>>bracket;

    int sise=bracket.length()/2;

for (int i = 0; i < sise; i=i++)
{

 cout<<bracket[i]<<"rrr";

        for (int j = 0; j < 2; j++)
        {
        if(bracket[j]=='()'|| bracket[j]=='{}' || bracket[j]=='[]'  ){
        cout<<"true";
        cout<<bracket[j];
    
    }

    else{
        
         cout<<"hello"<<bracket[j];
         break;
    }
  
        
        
        }   

}}