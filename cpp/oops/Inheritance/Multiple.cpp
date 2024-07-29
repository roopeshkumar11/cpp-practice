#include<iostream>
using namespace std;


class Animal{
    public:
    int age;


public:
    void bark(){
        cout<<"barking"<<endl;
    }

};


class Human{

public:
    string color;


    public:
    void speak(){
        cout<<"speaking";
    }

};


class Hybrid:public Animal,public Human{

};

int main(){

    Hybrid h1;
    h1.bark();
    h1.speak();

}