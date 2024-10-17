#include <iostream>

using namespace std;

int main()
{
        int x1, x2, y1, y2;
        float avg;

        cout << "Input 1st two numbers (separated by space): ";
        cin >> x1 >> x2;
        cout << "Input last two numbers (separated by space): ";
        cin >> y1 >> y2;

        avg = x1 + x2 + y1 + y2;

        cout << "The total of four numbers is : " << avg << endl;
        cout << "The average of four numbers is : " << avg / 4 << endl;

        return 0;
}