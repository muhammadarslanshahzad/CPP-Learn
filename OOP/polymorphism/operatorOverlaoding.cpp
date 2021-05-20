/*
 ----------------------- Day 10 ----------------------
 -----  Operator Overloading (Polymorphism)    ----------
 --- Date: 18.05.2021---------------------------------
 Author: Muhammad Arslan Shahzad, 
 ------------------------------------------------------
*/
#include <bits/stdc++.h>
using namespace std;

class Complex {
    private:
        int real, imag;
    public:
        Complex(int r = 0, int i =0)  {real = r;   imag = i;}
        
        // This is automatically called when '+' is used with
        Complex operator + (Complex const &obj) {
            Complex res;
            res.real = real + obj.real;
            res.imag = imag + obj.imag;
            return res;
        }
        void print() { cout << real << " + i" << imag << endl; }
};
   

int main(void){

    Complex c1(10, 5), c2(2, 4);
    Complex c3 = c1 + c2; // An example call to "operator+"
    c3.print();
    
    return 0;
}

/**
 * Sample Output
 * 12 + i9
*/