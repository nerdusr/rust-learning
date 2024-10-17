#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
       
        int row = 6, column = 4;
        char c;
        cin >> c;

        for (int i = 0; i < row; i++)
        {
                if (i == 0 || i == row - 1)
                        for (int first_index = 0; first_index < column; first_index++)
                                cout << c;
                else
                        cout << c << setw(column - 1) << c;
                
                cout << endl;
                
        }
        


        return 0;
}