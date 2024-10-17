#include <string>
#include <iostream>

using namespace std;

int main()
{

        string text = "welcome, w3resource";

        cout << "The string: " << text << endl;
        cout << "string length: " << text.length() << endl;
        cout << "The char at index 1 of the string: " << text.at(1) << endl;
        cout << "The char at index 1 of the string: " << text[1] << endl;
        cout << "Is the string empty? " << text.empty() << endl;
        cout << "Retrieve the sub-string from 3rd position for 4 characters: " << text.substr(3, 4) <<  endl;
        cout << "The sub-string replace by 'went': " << text.replace(3, 4, "went") << endl; 
        cout << "Append a string 'end' at last of the string: " << text.append(" end") << endl;
        cout << "Append a string 'end' at last of the string using operator: " << text + " end" << endl;
        cout << "The string 'insert' inserting at 3rd position of the string: " << text.insert(3, " insert ") << endl;
        cout << "The new string is: " << text << endl;
        
        string data;
        getline(cin, data);

        cout << data << endl;

        return 0;
}