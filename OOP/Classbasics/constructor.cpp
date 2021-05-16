/*
 ----------------------- Day 8 ----------------------
 -----  Constructor    -------------------------
 --- Date: 16.05.2021---------------------------------
 Author: Muhammad Arslan Shahzad, 
 ------------------------------------------------------
*/
#include <iostream>
using namespace std;

class Student{
    public:
        Student(){
            maths=100;
            sci =100;
            eng=100;
        }
        void Sum(){
            cout<<"Sum of marks is : "<<maths+eng+sci<<endl;
        }

    private:
        int maths, sci, eng;
};

int main(void){

    Student st; 
    st.Sum();  

    return 0;
}

/**
 * Sample Output
 * 
 * Sum of marks is : 300
 * 
*/