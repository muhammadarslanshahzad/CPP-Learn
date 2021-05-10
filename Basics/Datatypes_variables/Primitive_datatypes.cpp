/*
 ----------------------- Day 1 ----------------------
 ---  Primitive Data Types  --------------
 --- Date: 09.15.2020---------------------------------
 Author: Muhammad Arslan Shahzad, 
 ------------------------------------------------------
*/

#include <iostream>
using namespace std;


int main (void){
    int i;
    float f;
    char c;
    double d;
    long l;
    long int li;
    unsigned int ui;
    long long int lli;
    long double ld;
    signed int si;
    bool bol;
    wchar_t wc;

    cout<<"Size of Int : "<<sizeof(i)<<" Bytes"<<endl;
    cout<<"Size of Float : "<<sizeof(f)<<" Bytes"<<endl;
    cout<<"Size of Char : "<<sizeof(c)<<" Bytes"<<endl;
    cout<<"Size of Double : "<<sizeof(d)<<" Bytes"<<endl;
    cout<<"Size of Long : "<<sizeof(l)<<" Bytes"<<endl;
    cout<<"Size of Long Int : "<<sizeof(li)<<" Bytes"<<endl;
    cout<<"Size of Unsigned Int : "<<sizeof(ui)<<" Bytes"<<endl;
    cout<<"Size of Long Long Int : "<<sizeof(lli)<<" Bytes"<<endl;
    cout<<"Size of Long double  : "<<sizeof(ld)<<" Bytes"<<endl;
    cout<<"Size of Signed Int : "<<sizeof(si)<<" Bytes"<<endl;
    cout<<"Size of Bool : "<<sizeof(bol)<<" Bytes"<<endl;
    cout<<"Size of Wide Char : "<<sizeof(wc)<<" Bytes"<<endl;

    return 0;
}

/*
Sample Output:


Size of Int : 4 Bytes
Size of Float : 4 Bytes
Size of Char : 1 Bytes
Size of Double : 8 Bytes
Size of Long : 4 Bytes
Size of Long Int : 4 Bytes
Size of Unsigned Int : 4 Bytes
Size of Long Long Int : 8 Bytes
Size of Long double  : 12 Bytes
Size of Signed Int : 4 Bytes
Size of Bool : 1 Bytes
Size of Wide Char : 2 Bytes

*/ 