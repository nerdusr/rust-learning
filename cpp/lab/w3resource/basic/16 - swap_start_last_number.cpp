#include <string>
#include <iostream>

using namespace std;

int main()
{

        string number = "12345";
        string s_num = number[number.length() - 1] + number.substr(1, number.length() - 2) + number[0];
        cout << s_num;

        return 0;
}