#include<iostream>
using namespace std;
int main(){
    string haystack,needle,final;
    cout<<"enter haystack"<<" ";
    cin>>haystack;
     cout<<"enter  needle"<<" ";
    cin>>needle;
    for (int i = 0; i < haystack.length()+1; i++)
    {
        
        for (int j = 0; j <needle.length()+i; j++)
        {
            if (haystack[i]==needle[j])
            {
              
              final=final+haystack[i] ;
             
              if (final==needle)
              {
                cout<<"needle find in index :"<<" "<<i<<endl;
             
              }
              
              
            }
            
        }
          
            
        }
     
        
    }
    
 


