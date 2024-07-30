#include<iostream>
using namespace std;

class A{

    public:
        int a,b;
    int add(){
  return a+b;



    }

    void operator+ (A &obj){   //operator overloading
        int value1=this->a;
        int value2=obj.a;

        cout<<"output "<<value1-value2;

    }
};
int main(){

A obj1,obj2;
obj1.a=6;
obj2.a=2;
obj1+obj2;
}