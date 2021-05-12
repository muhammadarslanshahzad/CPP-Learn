/*
 ----------------------- Day 4 ----------------------
 -----  Voting eligibility  Functions   -----------------------------------
 --- Date: 12.05.2021---------------------------------
 Author: Muhammad Arslan Shahzad, 
 ------------------------------------------------------
*/
#include <iostream>
using namespace std;

bool isEligibal(int age){
    bool flag=0;
    if(age>=18){
        flag=1;
    }
    return flag;
}

int main(void){
    int age;
    cout<<"Enter your age : ";
    cin>>age;
    if(isEligibal(age)){
        cout<<"You are eligible to cast Vote\n";
    }
    else{
        cout<<"you are not eligibal to cast vote\n";
    }
    return 0;
}

/**
 * Sample Output
 * 
 *  Enter your age : 16
 *  you are not eligibal to cast vote
 *
 *  Enter your age : 18
 *  You are eligible to cast Vote
 *  
*/