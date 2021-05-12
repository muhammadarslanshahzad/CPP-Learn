/*
 ----------------------- Day 4 ----------------------
 -----  File Handling   -----------------------------------
 --- Date: 12.05.2021---------------------------------
 Author: Muhammad Arslan Shahzad, 
 ------------------------------------------------------
*/
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(void){
    
    string ain;
    cout<<"Enter the message here : ";
    getline(cin, ain);
    
    fstream file;
    file.open("Myfile.txt", ios::out);          //opening file in write mode
    if(file.is_open()){
        file<<ain;
        file<<"\nMessage added thorugh user console input\n\n";
        file.close();
    }

    string mes;
    cout<<"Enter 2nd message : ";
    getline(cin, mes);

    file.open("Myfile.txt",ios::app);           //to append in files
    if(file.is_open()){
        file<<mes;
        file<<"\nFile edited and 2nd message added.\n";
        file.close();
    }
    
    // fstream Myfile;
    // Myfile.open("Myfile.text", ios::in);     //to read from file 
    // if(Myfile.is_open()){
    //     string line;
    //     while(getline(Myfile, line)){
    //         cout<<line<<endl;
    //     }
    //     Myfile.close();        
    // }
    return 0;
}

/**
 * Sample Output
 * 
 * Enter the message here : this is first message to file
 *  Enter 2nd message : this is 2nd message to file
 * 
*/