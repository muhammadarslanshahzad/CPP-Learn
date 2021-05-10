/*
 ----------------------- Day 1 ----------------------
 ---  Derieved Data Types  --------------
 --- Date: 09.15.2020---------------------------------
 Author: Muhammad Arslan Shahzad, 
 ------------------------------------------------------
*/

#include <iostream>
using namespace std;

int max(int a[], int size){
    int temp=0;
    for(int i=1; i<size; i++){
        if(a[i]>a[i-1]){        //checking greater number in array
            temp= a[i];
        }
    }
    return temp;
}

int main (void){

    //array
    int n; 
    cout<<"Please enter size of array you want to input : ";
    cin>> n; 
    int a[n];
    for(int i=0;i<n; i++){
        cout<<"please enter value at index "<<i<<" : ";
        cin>>a[i];
    }
    int max_integer= max(a, n);
    cout<< "\n\n------------------------------Functions -----------------------\n"<<endl;
    cout<<"The biggest number is "<<max_integer<<endl;

    cout<< "\n\n------------------------------Array -----------------------\n"<<endl;
    for(int i=0; i<n; i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    //Pointers
    cout<< "\n\n------------------------------ Pointers -----------------------\n"<<endl;
    int var=10;
    int *ptr;
    ptr=&var;
    cout<<"Value at the ptr : "<<ptr<<endl;     //printing the ptr
    cout<<"Vale at the var : "<<var<<endl;      //printing the variable
    cout<< "value at teh *ptr : "<<*ptr<<endl;  //printing value in ptr through dereferncing 
    

    //reference varibles 
    cout<< "\n\n------------------------------Reference varibles -----------------------\n"<<endl;
    int x=10 ;
    cout<<"\n original value of x : "<<x<<endl; //printing x
    int & ref=x;
    cout<<"Value after reference variables : "<<x<<endl;
    ref =20;
    cout<<"value of x after changing in ref variable : "<<ref<<endl;


    return 0;
}

/*
Sample Output:

    Please enter size of array you want to input : 10
    please enter value at index 0 : 1
    please enter value at index 1 : 2
    please enter value at index 2 : 5
    please enter value at index 3 : 6
    please enter value at index 4 : 4
    please enter value at index 5 : 23 
    please enter value at index 6 : 26 
    please enter value at index 7 : 75
    please enter value at index 8 : 99
    please enter value at index 9 : 97


    ------------------------------Functions -----------------------

    The biggest number is 99


    ------------------------------Array -----------------------

    1 2 5 6 4 23 26 75 99 97 


    ------------------------------ Pointers -----------------------

    Value at the ptr : 0x61fedc
    Vale at the var : 10
    value at teh *ptr : 10


    ------------------------------Reference varibles -----------------------


    original value of x : 10
    Value after reference variables : 10
    value of x after changing in ref variable : 20
*/ 