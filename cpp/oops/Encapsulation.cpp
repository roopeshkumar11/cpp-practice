#include<iostream>
using namespace std;

class student{

    private:
    string name;
    int roll;
    int id;                           //Encapsulation


    public:
    int studentget(){
        cout<<"function"<<endl;
    }

};
int main(){

    student s;
    s.studentget();
    cout<<"Encapsulation";

}