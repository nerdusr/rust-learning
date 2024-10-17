#include <iostream>

using namespace std;

// forward declaration of add() (using a function declaration)
int add(int, int);

int main()
{
    
    int x = 20, y = 10;

    cout << add(x, y) << endl;

	return 0;
}

// In this program, we forward declare add, and we call add, but we never define add anywhere.
// When we try and compile this program, Visual Studio produces the following message

/* 
Compiling...
add.cpp
Linking...
add.obj : error LNK2001: unresolved external symbol "int __cdecl add(int,int)" (?add@@YAHHH@Z)
add.exe : fatal error LNK1120: 1 unresolved externals
*/


// even though the body of add() isn't defined until here
// int add(int x, int y)
// {
//     return x + y;
// }