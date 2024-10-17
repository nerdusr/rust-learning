#include <iostream>
#include <climits>

using namespace std;

int main()
{
        cout << INT_MIN << " - " << INT_MAX << endl;
        cout << UINT_MAX << endl;

        cout << LLONG_MIN << " - " << LLONG_MAX << endl;
        cout << ULLONG_MAX << endl;
        
        cout << SCHAR_MIN << " - " << SCHAR_MAX << endl;
        cout << USHRT_MAX << endl;
        cout << CHAR_BIT << endl;

        // etc...
        
        return 0;
}