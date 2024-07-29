#include<iostream>
using namespace std;

class Animal{

    public:
    int age;
    int weight;
    

    void speak(){
        cout<<"speaking"<<endl;
    }

};

class Dog:public Animal{

};


class Labera_dog:public Dog{

};
int main(){

    Dog h1;
    h1.speak();  //single level inheritance

    Labera_dog h2;   // multilevel inheritance
    h2.speak();


}