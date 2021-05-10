/*
 ----------------------- Day 2 ----------------------
 ---  Variables and its scope  --------------
 --- Date: 10.15.2020---------------------------------
 Author: Muhammad Arslan Shahzad, 
 ------------------------------------------------------
*/
#include <iostream>
using namespace std;

class InstanceVariables{
    public:
        static int ab;
       void seta(int a){
           this->a=a;
       }
       int geta(){
           return this->a;
       }
    private:
        int a;// a is accessible directly inside the class only
};

//initializing the static ab ;

int InstanceVariables::ab=1000/2;

int main(void){
    //local variables 

    int a , b, c;
    a=10;
    b=12;
    c=a+b;
    cout<<"The value of a : "<<a<<"\n value of b : "<<b<<" \nSum of a and b : "<<c<<endl;

    /*
    instance varibale 
    to access a we need a instance of class
    */ 
    InstanceVariables iv;
    int temp;
    cout<<"Enter value : ";
    cin>> temp;
    iv.seta(temp);
    cout<<"Value of you entered : " <<iv.geta()<<endl;

    InstanceVariables iv1;
    temp=0;
    cout<<"Enter value : ";
    cin>> temp;
    iv1.seta(temp);
    cout<<"Value of you entered : " <<iv.geta()<<" \t\t //this value is for the 2nd instace ."<<endl;

    //static varibles 
    cout<<"value of static variable : "<<iv.ab<<endl;
    cout<<"value of static variable from 2nd instance : "<<iv1.ab<<endl;

    return 0;
}


/*
Sample Output

    The value of a : 10
    value of b : 12   
    Sum of a and b : 22
    Enter value : 10   
    Value of you entered : 10
    Enter value : 20
    Value of you entered : 10                //this value is for the 2nd instace .
    value of static variable : 500
    value of static variable from 2nd instance : 500

*/ 