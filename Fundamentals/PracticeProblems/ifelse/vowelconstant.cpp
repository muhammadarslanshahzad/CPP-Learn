/*
 ----------------------- Day 4 ----------------------
 -----  Vowel or Constant   -----------------------------------
 --- Date: 12.05.2021---------------------------------
 Author: Muhammad Arslan Shahzad, 
 ------------------------------------------------------
*/
#include <iostream>
using namespace std;

int main(void){
    char a;
    cout<<"Enter the letter : ";
    cin>>a;
    
    if(a=='a' || a=='A' || a=='e' || a=='E' || a=='i' || a=='I' || a=='o' || a=='O' || a=='u' || a=='U'){
        cout<<"This is a vowel"<<endl;
    }else{
        cout<<"This is a consonant\n";
    }
    
    return 0;
}

/**
 * Sample Output
 *  Enter the letter : A
 *  This is a vowel
 * 
 *  
 *  Enter the letter : B
 *  This is a consonant
 * 
 * 
 * 
*/