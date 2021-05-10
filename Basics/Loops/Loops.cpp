/*
 ----------------------- Day 2 ----------------------
 ---  Loops and types  --------------
 --- Date: 10.15.2020---------------------------------
 Author: Muhammad Arslan Shahzad, 
 ------------------------------------------------------
*/
#include <iostream>
using namespace std;

int main(void){

    cout<<"\n\n-------------------For loop----------------------------------------"<<endl;
    string a;
    cout<<"Enter a string : ";
    cin>>a;
    for(int i=0; i<a.length(); i++){
            cout<<"Value at index "<<i<<" : "<<a[i]<<endl;
        }
    
    //whiel loop
    cout<<"\n\n-------------------While loop----------------------------------------"<<endl;
    int n;
    cout<<"Enter value : ";
    cin>>n;
    while(n>0){
        cout<<"Value of :  "<<n<<endl;
        cout<<"Enter a positive number to repeat or negative for next operation : ";
        cin>>n;
    }

    //do while loop
    cout<<"\n\n-------------------Do while loop----------------------------------------"<<endl;
    int x;
    do{
        cout<<"enter a postitive number to continue : ";
        cin>>x;
        cout<<x<<endl;

    }while (x>0);
    
    return 0;
}


/*
Sample Output
        
    -------------------For loop----------------------------------------
    Enter a string : Arslan
    Value at index 0 : A
    Value at index 1 : r
    Value at index 2 : s
    Value at index 3 : l
    Value at index 4 : a
    Value at index 5 : n


    -------------------While loop----------------------------------------
    Enter value : 12
    Value of :  12
    Enter a positive number to repeat or negative for next operation : 02
    Value of :  2
    Enter a positive number to repeat or negative for next operation : -89


    -------------------Do while loop----------------------------------------
    enter a postitive number to continue123
    123
    enter a postitive number to continue132
    132
    enter a postitive number to continue411
    411
    enter a postitive number to continue141
    141
    enter a postitive number to continue45
    45
    enter a postitive number to continue-78
    -78


*/ 