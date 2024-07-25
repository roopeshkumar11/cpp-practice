#include<iostream>
using namespace std;
int main(){
    int i=8;
    int *p=&i;
    int **p1=&p;
    cout<<"printing of p "<<p<<endl;
    cout<<"print of "<<*p1<<endl;
    cout<<"print of i value "<<**p1<<endl;
    cout<<"print of value of "<<*p<<endl;
}