#include<iostream>
using namespace std;

// herarichy
class A{
    public:
    void print1(){
        cout<<"hello"<<endl;
    };



};
class B:public A{
  public:
 void print2(){
    cout<<"heyy"<<endl;
  }
};



class C:public A{
    public:
    void print3(){
        cout<<"hii"<<endl;
    }
};
int main(){

    A obj1;
    obj1.print1();


    B obj2;
    obj2.print1();
    obj2.print2();


    C obj3;
    obj3.print1();
    obj3.print3();



}