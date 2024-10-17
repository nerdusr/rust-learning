#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
       
        double pi = 3.14159265; // Initializing a double variable 'pi' with the value of pi
        cout << fixed << setprecision(4); // Setting the output format to fixed with 4 decimal places
        cout << pi << endl; // Displaying 'pi' with 4 decimal places
        
        cout << fixed << setprecision(6); // Setting the output format to fixed with 6 decimal places
        cout << pi << endl; // Displaying 'pi' with 6 decimal places
        
        cout << setw(20) << pi << endl; // Displaying 'pi' with 6 decimal places

        bool isTrue = true;
        cout << boolalpha; // this line caused to show isTrue with bool sign (true or false)
        cout << isTrue << endl;
        
        
        return 0;
}