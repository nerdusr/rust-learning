#include <iostream>

using namespace std;

/* The Google C++ style guide recommends using 
a comment to document what the unnamed parameter was:*/

// void doSomething(int /*count*/);
// void doSomething(int /*count*/){}
// this function doesn't anything. Unreferenced parameters
// void doSomething(int count){}


// Best practice
/* When a function parameter exists but is not used in the body of the function,
do not give it a name. You can optionally put a name inside a comment */


// Qest : Write a function called doubleNumber() that takes one integer parameter. The function should return double the value of the parameter.
int doubleNumber(int n)
{
	return n * 2;
}

int main()
{
	// doSomething(40);
	cout << doubleNumber(10) << endl;

	int in{};
	cout << "enter a number to doubled:\n";
	cin >> in;
	cout << doubleNumber(in);
}