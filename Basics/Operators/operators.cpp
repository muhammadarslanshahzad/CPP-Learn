/*
 ----------------------- Day 2 ----------------------
 ---  operators  --------------
 --- Date: 10.15.2020---------------------------------
 Author: Muhammad Arslan Shahzad, 
 ------------------------------------------------------
*/
#include <iostream>
using namespace std;

int main(void){
    cout<<"----------------------------------Arithimatic operators--------------------------------"<<endl;
    int a, b;
    cout<<"Enter first value :";
    cin>>a;
    cout<<"Enter second value :";
    cin>>b;
    int opt;
    tryagain:
        cout<<"\nPlease now select from 1-5:"<<"\n1 for sum."<<"\n2 for difference."<<"\n3 for product."<<"\n4 for division."<<"\n5 for mod.\n6 for"<<endl;
        cin>>opt;
        switch (opt)
        {
        case 1:
            cout<<"Sum of "<<a<<" and "<<b<<" is : "<<a+b<<endl;
           goto tryagain;
        case 2:
            cout<<"Difference of "<<a<<" and "<<b<<" is : "<<a-b<<endl;
           goto tryagain;
        case 3:
            cout<<"Product of "<<a<<" and "<<b<<" is : "<<a*b<<endl;
            goto tryagain;
        case 4:
            cout<<"Division of "<<a<<" and "<<b<<" is : "<<a/b<<endl;
            goto tryagain;
        case 5:
            cout<<"Mod of "<<a<<" and "<<b<<" is : "<<a%b<<endl;
            goto tryagain;
        case 6:
            break;
        default:
            cout<<"Selection not in range, Try again"<<endl;
            goto tryagain;
        }
    
    //Unary operattors
    cout<<"---------------------------Unary Operators--------------------------------"<<endl;
    int i,o;
    cout<<"Enter the value : ";
    cin>>i;
    cout<<"Enter 1 for increament and 2 for decrement operation : ";
    cin>>o;
    if(o==1){
        cout<<"value will be converted to "<<++i<<" after pre-increment and "<<i++<<" after post increment"<<endl;
    }
    else{
        cout<<"value will be converted to "<<--i<<" after pre-decrement and "<<i--<<" after post decrement"<<endl;    
    }

    //realtional operator
    cout<<"---------------------------Relational Operators--------------------------------"<<endl;
    int ro1,ro2,opr;
    cout<<"Enter first value :";
    cin>>ro1;
    cout<<"Enter second value :";
    cin>>ro2;
    tryagaino:
        cout<<"\nEnter 1-6 to check :"<<"\n1 for equality"<<"\n2 for in-equality"<<"\n3 for greaterthan"<<"\n4 for lessthan"<<"\n5 for greaterthanequalto"<<"\n6 for lessthanequalto\n7 to exit."<<endl;
        cin>>opr;
        switch (opr)
        {
        case 1:
            if(a==b){
                cout<<"Success! \t"<<a<<" and "<<b<<" are equal to each other;"<<endl;
            }
            else{
                cout<<"Failed \t "<<a<<" and "<<b<<" are not equal to each other;"<<endl;
            }
            goto tryagaino;
        
        case 2:
            if(a!=b){
                cout<<"Sucess! \t"<<a<<" and "<<b<<" are not equal to each other;"<<endl;
            }
            else{
                cout<<"Failed! \t"<<a<<" and "<<b<<" are equal to each other;"<<endl;
            }
            goto tryagaino;
        
        case 3:
            if(a>b){
                cout<<"Sucess! \t"<<a<<" greater than "<<b<<endl;
            }
            else{
                cout<<"Failed! \t"<<a<<" does not greater than "<<b<<endl;
            }
            goto tryagaino;
        
        case 4:
            if(a<b){
                cout<<"Sucess! \t"<<a<<" Less than "<<b<<endl;
            }
            else{
                cout<<"Failed! \t"<<a<<" does not Less than "<<b<<endl;
            } 
            goto tryagaino;
        
        case 5:
            if(a>=b){
                cout<<"Sucess! \t"<<a<<" greater than  or equal to "<<b<<endl;
            }
            else{
                cout<<"Failed! \t"<<a<<" neither greater than nor equal to "<<b<<endl;
            }
            goto tryagaino;
        case 6:
            if(a<=b){
                cout<<"Sucess! \t"<<a<<" Less than  or equal to "<<b<<endl;
            }
            else{
                cout<<"Failed! \t"<<a<<" neither Less than nor equal to "<<b<<endl;
            }
            goto tryagaino;
        case 7:
            break;
        
        default:
            cout<<"No in range try again"<<endl;
            goto tryagaino;
        }

    //Relational Operator
    cout<<"---------------------------Logical Operators--------------------------------"<<endl;
    int lo1;
    cout<<"Please enter input :";
    cin>>lo1;
    if((lo1%2==0)&&(lo1%3==0)){
        cout<<lo1<<" is divisible by 2 and 3"<<endl;
    }
    else if((lo1%2==0)||(lo1%3==0)){
        cout<<lo1<<" is divisible by 2 or 3"<<endl;
    }
    else{
        cout<<lo1<<" is not divisible by 2 nor 3"<<endl;
    }
    bool lo2;
    cout<<"Enter 1 or 0 ";
    cin>>lo2;
    if((lo2==1) || (lo2==0)){
        cout<<"Value after apply not operator : "<<!lo2<<endl; 
    }
    else{
        cout<<"You enter wrong input bool only accept either 1 or 2"<<endl;
    }

    //Assignment operator
     cout<<"----------------------------------Assignment operators--------------------------------"<<endl;
    int aa, ab;
    cout<<"please Enter first input";
    cin>>aa;
    cout<<"please Enter Second input";
    cin>>ab;
    tryagainassign:
        int aopt;
        cout<<"\nPlease now select from 1-5:"<<"\n1 for assignment only ."<<"\n2 for addition and assignment."<<"\n3 for difference and assignment."<<"\n4 for product and assignment."<<"\n5 for division and assignment.\n6 for exit"<<endl;
        cin>>aopt;
        switch (aopt)
        {
        case 1:
            aa=ab;
            cout<<"Result "<<aa<<endl;
            goto tryagainassign;
        case 2:
            a += b;
            cout<<"Result "<<aa<<endl;
            goto tryagainassign;
        case 3:
            a -= b;
            cout<<"Result "<<aa<<endl;
            goto tryagainassign;
        case 4:
            a *= b;
            cout<<"Result "<<aa<<endl;
            goto tryagainassign;
        case 5:
            a /= b;
            cout<<"Result "<<aa<<endl;
            goto tryagainassign;
        case 6:
            break;
        default:
            cout<<"Selection not in range, Try again"<<endl;
            goto tryagainassign;
        }

        //bitwise operator
        cout<<"------------------------------------------Bitwise Operator------------------------------------------"<<endl;
        int ba,bb;
        cout<<"Enter first number : "<<endl;
        cin>>ba;
        cout<<"Enter Second number: "<<endl;
        cin>>bb;
        if(ba & bb){
            cout<<ba<<" & "<<bb<<" Bitwise And success"<<endl;
        }
        
        if(ba | bb){
            cout<<ba<<" & "<<bb<<" Bitwise OR success"<<endl;
        }
        
        if(ba ^ bb){
            cout<<ba<<" & "<<bb<<" Bitwise XOR success"<<endl;
        }
        cout<<"One's complement of "<<ba <<" is :"<<~ba<<endl;
        int temp = ba<<bb;
        if(ba>bb){
            int temp = ba<<bb;
            cout<<"After left shift "<<temp<<endl;
            
        }
        else{
            int temp = ba>>bb;
            cout<<"After Right shift "<<temp<<endl;
        }

    return 0;
}


/*
Sample Output
        Enter first value :90
        Enter second value :11

        Please now select from 1-5:
        1 for sum.
        2 for difference.
        3 for product.
        4 for division.
        5 for mod.
        6 for
        1
        Sum of 90 and 11 is : 101  

        Please now select from 1-5:
        1 for sum.
        2 for difference.
        3 for product.
        4 for division.
        5 for mod.
        6 for
        2
        Difference of 90 and 11 is : 79

        Please now select from 1-5:    
        1 for sum.
        2 for difference.
        3 for product.
        4 for division.
        5 for mod.
        6 for
        3
        Product of 90 and 11 is : 990

        Please now select from 1-5:  
        1 for sum.
        2 for difference.
        3 for product.
        4 for division.
        5 for mod.
        6 for
        4
        Division of 90 and 11 is : 8

        Please now select from 1-5:
        1 for sum.
        2 for difference.
        3 for product.
        4 for division.
        5 for mod.
        6 for
        5
        Mod of 90 and 11 is : 2

        Please now select from 1-5:
        1 for sum.
        2 for difference.
        3 for product.
        4 for division.
        5 for mod.
        6 for
        6
        ---------------------------Unary Operators--------------------------------
        Enter the value : 12
        Enter 1 for increament and 2 for decrement operation : 1
        value will be converted to 14 after pre-increment and 12 after post increment
        ---------------------------Relational Operators--------------------------------
        Enter first value :89
        Enter second value :10

        Enter 1-6 to check :
        1 for equality
        2 for in-equality
        3 for greaterthan
        4 for lessthan
        5 for greaterthanequalto
        6 for lessthanequalto
        7 to exit.
        1
        Failed   90 and 11 are not equal to each other;

        Enter 1-6 to check :
        1 for equality
        2 for in-equality
        3 for greaterthan
        4 for lessthan
        5 for greaterthanequalto
        6 for lessthanequalto
        7 to exit.
        2
        Sucess!         90 and 11 are not equal to each other;

        Enter 1-6 to check :
        1 for equality
        2 for in-equality
        3 for greaterthan
        4 for lessthan
        5 for greaterthanequalto
        6 for lessthanequalto
        7 to exit.
        3
        Sucess!         90 greater than 11

        Enter 1-6 to check :
        1 for equality
        2 for in-equality
        3 for greaterthan
        4 for lessthan
        5 for greaterthanequalto
        6 for lessthanequalto
        7 to exit.
        4
        Failed!         90 does not Less than 11

        Enter 1-6 to check :
        1 for equality
        2 for in-equality
        3 for greaterthan
        4 for lessthan
        5 for greaterthanequalto
        6 for lessthanequalto
        7 to exit.
        5
        Sucess!         90 greater than  or equal to 11

        Enter 1-6 to check :
        1 for equality
        2 for in-equality
        3 for greaterthan
        4 for lessthan
        5 for greaterthanequalto
        6 for lessthanequalto
        7 to exit.
        6
        Failed!         90 neither Less than nor equal to 11

        Enter 1-6 to check :
        1 for equality
        2 for in-equality
        3 for greaterthan
        4 for lessthan
        5 for greaterthanequalto
        6 for lessthanequalto
        7 to exit.
        7
        ---------------------------Logical Operators--------------------------------
        Please enter input :12
        12 is divisible by 2 and 3
        Enter 1 or 0 1
        Value after apply not operator : 0
        ----------------------------------Assignment operators--------------------------------
        please Enter first input13
        please Enter Second input12

        Please now select from 1-5:
        1 for assignment only .
        2 for addition and assignment.
        3 for difference and assignment.
        4 for product and assignment.
        5 for division and assignment.
        6 for exit
        1
        Result 12

        Please now select from 1-5:
        1 for assignment only .
        2 for addition and assignment.
        3 for difference and assignment.
        4 for product and assignment.
        5 for division and assignment.
        6 for exit
        2
        Result 12

        Please now select from 1-5:
        1 for assignment only .
        2 for addition and assignment.
        3 for difference and assignment.
        4 for product and assignment.
        5 for division and assignment.
        6 for exit
        3
        Result 12

        Please now select from 1-5:
        1 for assignment only .
        2 for addition and assignment.
        3 for difference and assignment.
        4 for product and assignment.
        5 for division and assignment.
        6 for exit
        5
        Result 12

        Please now select from 1-5:
        1 for assignment only .
        2 for addition and assignment.
        3 for difference and assignment.
        4 for product and assignment.
        5 for division and assignment.
        6 for exit
        6
        Selection not in range, Try again

        Please now select from 1-5:
        1 for assignment only .
        2 for addition and assignment.
        3 for difference and assignment.
        4 for product and assignment.
        5 for division and assignment.
        6 for exit
        7
        ------------------------------------------Bitwise Operator------------------------------------------
        Enter first number :
        12
        Enter Second number: 
        6
        12 & 6 Bitwise And success    
        12 & 6 Bitwise OR success     
        12 & 6 Bitwise XOR success    
        One's complement of 12 is :-13
        After left shift 768
   
*/ 