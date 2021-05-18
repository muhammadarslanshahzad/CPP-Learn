/*
 ----------------------- Day 10 ----------------------
 -----  Polymorphism    -------------------------
 --- Date: 18.05.2021---------------------------------
 Author: Muhammad Arslan Shahzad, 
 ------------------------------------------------------
*/
#include <bits/stdc++.h>
using namespace std;

class Funcover
{
    public:
      
    // function with 1 int parameter
    void func(int x)
    {
        cout << "value of x is " << x << endl;
    }
      
    // function with same name but 1 double parameter
    void func(double x)
    {
        cout << "value of x is " << x << endl;
    }
      
    // function with same name and 2 int parameters
    void func(int x, int y)
    {
        cout << "value of x and y is " << x << ", " << y << endl;
    }
};

int main(void){
    
    Funcover obj;
    obj.func(70);
      
    // The second 'func' is called
    obj.func(9.132);
      
    // The third 'func' is called
    obj.func(85,50);

    return 0;
}

/**
 * Sample Output
 * 
 *  value of x is 70
 *  value of x is 9.132       
 *  value of x and y is 85, 50
 * 
*/