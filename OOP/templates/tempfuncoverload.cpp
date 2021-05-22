/*
 ----------------------- Day 14 ----------------------
 ----- function overloading using Templates     ----------
 --- Date: 22.05.2021---------------------------------
 Author: Muhammad Arslan Shahzad, 
 ------------------------------------------------------
*/
#include <bits/stdc++.h>
using namespace std;



template <class T>

// Template overloading of function
void display(T t1)
{
	cout << "Displaying Template: "
		<< t1 << "\n";
}

// Template overloading of function (when we exlicitly define temp func)
void display(int t1)
{
	cout << "Explicitly display: "
		<< t1 << "\n";
}

// Driver Code
int main()
{
	// Function Call with a
	display(200);
	display(12.40);     	// different arguments
	display('G');

	return 0;
}

/**
 * Sample Output
 * 
 *  Explicitly display: 200  
 *  Displaying Template: 12.4
 *  Displaying Template: G
 * 
*/

