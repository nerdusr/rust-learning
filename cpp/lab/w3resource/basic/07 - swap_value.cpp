#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
       
        int x, y, tmp;

        cout << "X : ";
        cin >> x;
        cout << "Y : ";
        cin >> y;

        tmp = x;
        x = y;
        y = tmp;

        cout << "X : " << x << " " << " Y : "<< y;
        
        
        return 0;
}