/*
 ----------------------- Day 8 ----------------------
 -----  Copy Constructor   -------------------------
 --- Date: 16.05.2021---------------------------------
 Author: Muhammad Arslan Shahzad, 
 ------------------------------------------------------
*/
#include <iostream>
#include<cstring>
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

int main()
{
	String str1("CS geeky");
	String str2 = str1;

	str1.print(); // what is printed ?
	str2.print();

	str2.change("CS coder");

	str1.print(); // what is printed now ?
	str2.print();
	return 0;
}

/**
 * Sample Output
 *  CS geeky
    CS geeky
    CS geeky
    CS coder
 * 
*/



