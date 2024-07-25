#include<iostream>
using namespace std;
int main(){
    int num=5;
    cout<<"num is  "<<num<<endl;
    cout<<"address of num is"<<&num<<endl; //& print address

    int *ptr=&num;   //pointer store address
     cout<<"value of :"<<*ptr<<endl;   //*derefreance
    cout<<"address of ptr:"<<ptr<<endl;    // any type of pionter 8bit use
}