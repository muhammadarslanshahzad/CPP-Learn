/*
 ----------------------- Day 10 ----------------------
 -----  Virtual Functions (Polymorphism)    ----------
 --- Date: 18.05.2021---------------------------------
 Author: Muhammad Arslan Shahzad, 
 ------------------------------------------------------
*/

#include <iostream>
using namespace std;

class BaseClass {
public:
	virtual void print()
	{
		cout << "print base class" << endl;
	}

	void show()
	{
		cout << "show base class" << endl;
	}
};

class DerievedClass : public BaseClass {
public:
	void print()
	{
		cout << "print derived class" << endl;
	}

	void show()
	{
		cout << "show derived class" << endl;
	}
};

int main()
{
	BaseClass* baseptr;
	DerievedClass dri;
	baseptr = &dri;

	// virtual function, binded at runtime
	baseptr->print();

	// Non-virtual function, binded at compile time
	baseptr->show();
}

/**
 * Sample Output
 * 
 *  print derived class
 *  show base class
 * 
 * 
*/