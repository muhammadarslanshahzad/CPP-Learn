/*
 ----------------------- Day 8 ----------------------
 -----  Abstraction    -------------------------
 --- Date: 16.05.2021---------------------------------
 Author: Muhammad Arslan Shahzad, 
 ------------------------------------------------------
*/


#include <iostream>
using namespace std;

class Abstraction{
    private:
        int a, b;
    public:
        void set(int a, int b){
            this->a=a;
            this->b=b;
        }
    
        void Display(){
            cout<<"a = "<<a<<endl;
            cout<<"b = "<<b<<endl;
        }
};

int main(void){

    Abstraction a;
    a.set(5,10);
    a.Display();
    
    return 0;
}

/**
 * Sample Output
 * 
 *  a = 5
 *  b = 10
 * 
*/