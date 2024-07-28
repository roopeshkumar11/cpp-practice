#include<iostream> 
#include "outside.cpp"  //using class outside of file 
using namespace std;

 class Hero{

     private :
    char level;

    public:
    int health; //if your class empty use only 1 bite;

  

void print(){
    cout<<level<<endl;
}


int getlevel(){    //getter acceess private element outside of class
    return level;
}

int setlevel(int s){    //setter set the value  private element outside of class
    level=s;
}
 };
int main(){

// static allocation
Hero h1;
Hero2 h2;

// dynamic allocation 
Hero *h=new Hero;
// (*h).setlevel(70);
h->setlevel(70);
// print adynamic allocation
cout<<"level is dynamic : "<<(*h).getlevel()<<endl;
cout<<"level is dynamic : "<<h->getlevel()<<endl;   // both output is same  you can use (*h) and h-> 


// set value
h1.health=100;
h2.health=20;


h1.setlevel(20);
cout<<"size of h1   :  "<<sizeof(h1)<<endl;
cout<<"health is h1 : "<<h1.health<<endl;
cout<<"level is h1 : "<<h1.getlevel()<<endl;
cout<<"size of h2   :  "<<sizeof(h2)<<endl;
cout<<"health is h2 : "<<h2.health<<endl;





}