/*
 ----------------------- Day 9 ----------------------
 -----  Multilevel inheritance    -------------------------
 --- Date: 17.05.2021---------------------------------
 Author: Muhammad Arslan Shahzad, 
 ------------------------------------------------------
*/
#include <iostream>
using namespace std;

class Vehicle{  //grand parent class
    public:
        void Vehiclemov(){
            cout<<"this is the Vehicle move"<<endl;
        }
};

class Car : public Vehicle{      //parent class
    public:
        void Carmove(){
            cout<<"This is the car move"<<endl;
        }
};
class SportCar : public Car{     //child class 
    public: 
        void SportMove(){
            cout<<"This is sport car move"<<endl;
        }
};


int main(void){

    SportCar s; 
    s.Vehiclemov();
    s.Carmove();
    s.SportMove();
    
    return 0;
}

/**
 * Sample Output
 * 
 *  this is the Vehicle move
 *  This is the car move
 *  This is sport car move
 * 
*/