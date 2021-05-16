/*
 ----------------------- Day 8 ----------------------
 ----- Parameterized Constructor    -------------------------
 --- Date: 16.05.2021---------------------------------
 Author: Muhammad Arslan Shahzad, 
 ------------------------------------------------------
*/
#include <iostream>
using namespace std;

class Student{
    public:
        Student( int a, int b){
            this->a=a;
            this->b=b;
        }

        void Sum(){
            cout<<"Sum of variables is : "<<a+b<<endl;
        }
    private:
        int a, b;
};

int main(void){

    int a, b;
    cout<<"Enter first number : ";
    cin>>a;
    cout<<"Entter second number : ";
    cin>>b;

    Student * st = new Student(a,b);
    st->Sum();
    
    return 0;
}

/**
 * Sample Output
 * 
 *  Enter first number : 12
    Entter second number : 1
    Sum of variables is : 13
 * 
*/