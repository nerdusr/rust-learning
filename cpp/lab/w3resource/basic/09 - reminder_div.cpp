#include <iostream>

using namespace std;

int main()
{
        int x, y;

        cout << "Input the dividend : ";
        cin >> x;
        cout << "Input the divisor : ";
        cin >> y;

        cout << "The quotient of the division is : " << x / y << endl;
        cout << "The remainder of the division is : " << x % y;

        return 0;
}