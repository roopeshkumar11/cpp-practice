#include<iostream>
using namespace std;

class Car{
  public:
    int price;
    string color;
    static int time;  //stattic user data value access without make object
    static int speed;



// default
    Car(){
        cout<<"dafault constructor"<<endl;
    }

//parameter constructor
    Car(int price){
        this->price=price;
        cout<<"price "<<price<<endl;
    }

    Car(int price ,string color){
        this->price=price;
        this->color=color;
        cout<<"price "<<price<<endl;
        cout<<"color "<<color<<endl;
    }

    // copy constructor

    Car(Car& n){
        this->color=n.color;
        this->price=n.price;

            cout<<"copy  color "<<color<<endl;
    cout<<"copy price  "<<price<<endl;

    };
 
  static int random(){
     return Car::speed;  //static function can access only static member 
  }

    ~Car(){                      // destruction memory de-alloaction
   cout<<"destructor"<<endl;
    }



};
  int   Car::time=10;  //initialize 
  int Car::speed=90;
int main(){  
    
    Car c(10);   //destructor call automatically for satic loaction but destructor call manually for dynamic allocation
    Car C(20);
    cout<<"price ----"<<C.price<<endl;
    Car c1(10,"black");
    Car c2;


    Car c3(c1);

    C=c;  // aasigmnet operator for copy
     cout<<"price ---- copy "<<C.price<<endl;

     cout<<"static memmber "<<Car::time<<endl;    

    cout<<"static function " <<Car::speed<<endl; // static function  




}