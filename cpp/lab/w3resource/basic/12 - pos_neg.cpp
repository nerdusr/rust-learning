

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
       
        int c;
        cout << "Input a number : ";
        cin >> c;

        if (c > 0)
                cout << "The entered number is positive";
        else if (c < 0)
                cout << "The entered number is negative";
        else
                cout << "The entered number is zero";

        return 0;
}