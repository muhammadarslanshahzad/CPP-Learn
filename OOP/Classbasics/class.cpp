/*
 ----------------------- Day 6 ----------------------
 -----  Class   -----------------------------------
 --- Date: 15.05.2021---------------------------------
 Author: Muhammad Arslan Shahzad, 
 ------------------------------------------------------
*/
#include <iostream>
using namespace std;

class Student{
    public:
        string name;
        string course;
        int age;
        bool gender;        //1 for male and 0 for female.
};

void PrintData(Student s){
    cout<<"\nName is  : "<<s.name<<endl;
    cout<<"Name is  : "<<s.course<<endl;
    cout<<"Name is  : "<<s.age<<endl;
    if(s.gender == 1){
        cout<<"Gender is : Male"<<endl;
    }else{
        
        cout<<"Gender is : Female"<<endl;
    }
}

int main(void){

    Student sa;
    
    cout<<"Enter Data : "<<endl;
    cout<<"Enter Name : ";
    cin>> sa.name;
    cout<<"Enter Course : ";
    cin>>sa.course;
    cout<<"Enter age : ";
    cin>>sa.age;
    cout<<"Enter gender (1 for male and 0 for female) : ";
    cin>>sa.gender;

    PrintData(sa);

    return 0;
}

/**
 * Sample Output
 * 
 *  Enter Data : 
    Enter Name : Student 
    Enter Course : OOP
    Enter age : 19
    Enter gender (1 for male and 0 for female) : 1
   
    Name is  : Student
    Name is  : OOP
    Name is  : 19
    Gender is : Male
 * 
*/