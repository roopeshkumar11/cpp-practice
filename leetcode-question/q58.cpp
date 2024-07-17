#include<iostream>
using namespace std;
int main(){
    string s;
    cout<<"enter element";
    cin>>s;
    getline(cin, s);
    string lenght;

    int size=s.length();
    cout<<size;
   
    for(int i=size-1;i>=0;i--){

        if (s[i] ==' ')
        {
            break;
        }
        else{
      lenght=s[i]+lenght;
     }
      
      
    }
cout<<"last word is "<<" "<<lenght<<endl;
cout<<"lenght last word is "<<" "<<lenght.length()<<endl;
   
}
