#include<iostream>
using namespace std;
int main(){

// character string 

    char str[12];

    cout<<"enter char array ";

    // cin>>str;  // it take input only before enter example   hello world only print hello

    cin.getline(str,100);  // it stop input type $


for (char ch:str){
    cout<<ch<<" ";
}



cout<<endl;

    cout<<"output "<<str<<endl;

int len=0;
    for(int i=0;i<str[i]!='\0';i++){  // lenght find;
        len++;
    }

    cout<<" length : "<<len;
}