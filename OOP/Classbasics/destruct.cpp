/*
 ----------------------- Day 8 ----------------------
 -----  Destructor    -------------------------
 --- Date: 16.05.2021---------------------------------
 Author: Muhammad Arslan Shahzad, 
 ------------------------------------------------------
*/
#include <iostream>
#include <string.h>
using namespace std;

class String
{
private:
	char *s;
	int size;
public:
	String(const char *str = NULL); // constructor
	~String() { delete [] s; }// destructor
	String(const String&); // copy constructor
	void print() { cout << s << endl; } // Function to print string
	void change(const char *); // Function to change
};

String::String(const char *str)
{
	size = strlen(str);
	s = new char[size+1];
	strcpy(s, str);
}

void String::change(const char *str)
{
	delete [] s;
	size = strlen(str);
	s = new char[size+1];
	strcpy(s, str);
}

String::String(const String& old_str)
{
	size = old_str.size;
	s = new char[size+1];
	strcpy(s, old_str.s);
}


int main(void){

    String str1("CS GEEK");
    str1.print();
    str1.~String();

    return 0;
}

/**
 * Sample Output
 * 
 * CS GEEK
 * 
*/