#include<iostream>
using namespace std;


class Human{
    public:
    int age;
    int weight;


    void setage(int age){
        this->age=age;
    }

};




class Male:public Human{
    public:
    string color="black";

};
int main(){

    Male obj1;
    obj1.setage(20);
   cout<<"age : "<<obj1.age<<endl;
      cout<<"color : "<<obj1.color<<endl;

}