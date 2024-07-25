#include<iostream>
using namespace std;
void print(int *p){
    cout<<"value of p "<<*p<<endl;
    cout<<"address of p "<<p<<endl;

}

void update(int *p){
    *p=*p+1;

}
int main(){
    int value=8;
    int *p=&value;
    // print(p);
    cout<<"before  "<<*p<<endl;
    update(p);
    cout<<"After "<<*p;


}