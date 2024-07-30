#include<iostream>
using namespace std;

class A{
    public:
    void print1(){
        cout<<"classs A"<<endl;

    }
};

 class D{
    public:
    void print(){
        cout<<"class D"<<endl;
    }
 };
class B :public A{
    public:
    void print2(){
        cout<<"classs b"<<endl;
    }
};

class C :public A,public D{

};
int main(){

    B obj1;
    obj1.print1();
    obj1.print2();


    C obj2;
    obj2.print1();
    obj2.print();


}