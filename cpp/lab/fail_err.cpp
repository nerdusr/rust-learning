#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{	

	// this program print fail because to EXIT_FAILURE in the end of code
	if (EXIT_SUCCESS)
		cout << "SUCCESS";
	else
		cout << "FAIL";

	// (EXIT_FAILURE, 0), EXIT_SUCCESS are in cstdlib

	return EXIT_FAILURE;
}
