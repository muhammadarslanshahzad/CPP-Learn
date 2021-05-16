/*
 ----------------------- Day 8 ----------------------
 ----- Encapsulation  -------------------------
 --- Date: 16.05.2021---------------------------------
 Author: Muhammad Arslan Shahzad, 
 ------------------------------------------------------
*/
#include <iostream>
using namespace std;

class Encapsulation
{
    private:
        // data hidden from outside world
        int x;
          
    public:
        // function to set value of 
        // variable x
        void set(int a)
        {
            x =a;
        }
          
        // function to return value of
        // variable x
        int get()
        {
            return x;
        }
};

int main(void){
    
    Encapsulation ecap;
    ecap.set(5);
    cout<<ecap.get()<<endl;

    return 0;
}

/**
 * Sample Output
 * 
 * 5
 * 
*/