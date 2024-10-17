#include <iostream>

// Function that does not return a value
void returnNothing()
{
}

// Function that returns a value
int returnFive()
{
    return 5;
}



using namespace std;

int main()
{
    // When calling a function by itself, no value is required
    returnNothing(); // ok: we can call a function that does not return a value
    returnFive();    // ok: we can call a function that returns a value, and ignore that return value

    // Trying to return a value from a non-value returning function will result in a compilation error
    // When calling a function in a context that requires a value (like std::cout)
    cout << returnFive();    // ok: we can call a function that returns a value, and the value will be used
    // cout << returnNothing(); // compile error: we can't call a function that returns void in this context


    return 0;
}