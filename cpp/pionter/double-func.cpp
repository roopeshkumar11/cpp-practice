#include<iostream>
using namespace std;
void update(int **p2){
    // p=p+1;  // no change before and after 
    *p2=*p2+1;  // change before and after 
    // **p2=**p2+1; //  change before and after 

}
int main(){

    int i=5;
    int *p=&i;
    int **p2=&p;
    cout<<"before value of i "<<i<<endl;
    cout<<"before value of p "<<p<<endl;
    cout<<"before value of p2 "<<p2<<endl;
  update(p2);
  cout<<"after value of i "<<i<<endl;
    cout<<"after value of p "<<p<<endl;
    cout<<"after value of p2 "<<p2<<endl;

}