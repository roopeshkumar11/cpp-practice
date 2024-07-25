#include<iostream>
using namespace std;

int main(){
    int num,q;
    int  reverse=0;
    cout<<"enter number to check pslindrome is or not";
    cin>>num;
    int check=num;
    while (num!=0)
    {
       q=num%10;
       reverse=reverse*10+q;
       num=num/10;

 

 
    }
    
    if (check==reverse)
    {
       cout<<"Number is Pelindrom";
    }
    else{
        cout<<"Number is not Pelindrom";
    }
    
    
}