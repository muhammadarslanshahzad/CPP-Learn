/*
 ----------------------- Day 7 ----------------------
 -----  Getter and Setter    -------------------------
 --- Date: 15.05.2021---------------------------------
 Author: Muhammad Arslan Shahzad, 
 ------------------------------------------------------
*/
#include <iostream>
using namespace std;

//class 
class Student{
    public:
        Student (){ //defualt constructor 

        };
        
        //getters
        void setName(string name){
            this->name = name; 
        }
        void setCourse(string course){
            this->course = course; 
        }
        void setAge(int age){
            this->age = age; 
        }

        
        //setters
        string getName(){
            return this->name;
        }

        string getCourse(){
            return this->course;
        }

        int getAge(){
            return this->age;
        }


    private:
        string name;
        string course;
        int age;
};




int main(void){
    
    int a;
    string n, c;
    cout<<"Enter name: ";
    cin>>n;
    cout<<"Enter course: ";
    cin>>c;
    cout<<"Enter age : ";
    cin>>a;

    //creating object

    Student st;
    
    //calling setters 
    st.setName(n);
    st.setCourse(c);
    st.setAge(a);

    //calling getters
    cout<<"Name is "<<st.getName()<<endl;
    cout<<"Age is "<<st.getAge()<<endl;
    cout<<"Course is "<<st.getCourse()<<endl;

    return 0;
}

/**
 * Sample Output
 * 
 *  Enter name: Student 
    Enter course: OPP
    Enter age : 19
    Name is Student
    Age is 19
    Course is OPP
 * 
 * 
 * 
 * 
*/