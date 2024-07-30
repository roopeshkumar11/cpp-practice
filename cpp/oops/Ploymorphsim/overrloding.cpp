#include<iostream>
using namespace std;

class A {   //overloading
    public:
    int a,b;
    void add(int a, int b){
        cout<<"add of a and b "<<a+b;
    };


    void add(int a, int b, int c){
        cout<<"adding a ,b,c "<<a+b+c;
    }
};
int main(){

    A obj;
    obj.add(2,3);
    obj.add(4,2,7);

}