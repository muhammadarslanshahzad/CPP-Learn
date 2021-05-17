/*
 ----------------------- Day 9 ----------------------
 -----  Inheritance    -------------------------
 --- Date: 17.05.2021---------------------------------
 Author: Muhammad Arslan Shahzad, 
 ------------------------------------------------------
*/
#include <iostream>
using namespace std;

class Vehicle{
    public:
        void move(){
            cout<<"vahicle is moving \n";
        }

};

class Cars : public Vehicle{
    public:
        void fourwheel(){
            cout<<"Car is moving with four wheel\n";
        }
};

int main(void){
    
    Cars c ;
    c.fourwheel();
    c.move();

    return 0;
}

/**
 * Sample Output
 * 
 *  Car is moving with four wheel
    vahicle is moving 
 * 
*/