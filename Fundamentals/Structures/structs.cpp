/*
 ----------------------- Day 4 ----------------------
 -----  Structures   -----------------------------------
 --- Date: 12.05.2021---------------------------------
 Author: Muhammad Arslan Shahzad, 
 ------------------------------------------------------
*/
#include <iostream>
#include <string>
using namespace std;

struct Smartphone{
    string model_name;
    int price;
};

struct Person{
    string name; 
    string occupation;
};

void printPerson(Person* p, Smartphone *p1){
    cout<<"\n\nName is : "<<p->name<<endl;
    cout<<"Occupation is : "<<p->occupation<<endl;
    cout<<"Modle Name is : "<<p1->model_name;
    cout<<"\n and price is : "<<p1->price;
}

int main(void){

    Smartphone  p;
    cout<<"Enter model name : ";  
    cin>>p.model_name;
    cout<<"Enter model price : ";  
    cin>>p.price;
    

    // struct Smartphone * p2=&p;
    // cout<<p2->model_name<<endl;
    // cout<<p2->price<<endl;

    Person  p1;
    cout<<"Enter Name : ";
    cin>>p1.name;
    cout<<"Enter Occupation : ";
    cin>>p1.occupation;
    printPerson(&p1, &p);

    return 0;
}

/**
 * Sample Output
 *  
 *  Enter model name : honor
 *  Enter model price : 49990
 *  Enter Name : arslan 
 *  Enter Occupation : ComputerScientist
 * 
 * 
 *  Name is : arslan
 *  Occupation is : ComputerScientist
 *  Modle Name is : honor
 *  and price is : 49990
 * 
 * 
*/