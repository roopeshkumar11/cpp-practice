#include<iostream>
using namespace std;
int main(){
    // int  arr[10]={0,2,3};
    // cout<<"address of first elemnet "<<arr<<endl;
    // cout<<"value of "<<arr[0]<<endl;
    // cout<<"address of first memory block"<<&arr[0]<<endl;
    // cout<<"4th  "<<*arr<<endl;
    //  cout<<"5th  "<<*arr+1<<endl;
    //   cout<<"6th "<<*(arr+1)<<endl;

    //second part

    int a[20]={1,2,3,4,5};
    cout<<"--->"<<&a[0]<<endl;
    int *p=&a[0];
    cout<<">>"<<&p<<endl;

    //character pionter

    char list[5]="abcd";
    cout<<list<<endl;  //print contain
    char *a1=&list[0];
    cout<<"1st"<<&a1<<endl; //without & operater you can not print address
    cout<<*a1<<endl;

}