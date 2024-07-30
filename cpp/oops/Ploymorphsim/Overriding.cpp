#include<iostream>
using namespace std;

class A{
    public:
    void print(){
        cout<<"class a "<<endl;
    }

};


class B :public  A{
    public:
    void print(){
        cout<<"class b";
    }
};
int main(){

    B obj;
    obj.print();
     

}