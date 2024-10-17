#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
        int length, width;
        float s, a;

        cin >> length;
        cin >> width;

        a = length * width;
        s = (length + width) * 2;


        cout << a << endl;
        cout << s << endl;
        
        return 0;
}