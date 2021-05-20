/*
 ----------------------- Day 12 ----------------------
 -----  Templates    ----------
 --- Date: 20.05.2021---------------------------------
 Author: Muhammad Arslan Shahzad, 
 ------------------------------------------------------
*/
#include <bits/stdc++.h>
using namespace std;

class String {
 public:
     char* pStr; 
 friend bool operator ==( const String&, const String& );
 
 };

bool operator ==( const String& x, const String& y ) {
 return strcmp(x.pStr, y.pStr) == 0;
}


template< typename T >
bool isEqual( T x, T y ) {
 return ( x == y );
}
int main() {
    string s1="xyz",s2="xyz";   
    cout<< isEqual( s1, s2 ); 
    return 0;
}



/**
 * Sample Output
 * 0
 * 1
 * 
*/