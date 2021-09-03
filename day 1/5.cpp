//Write a Program to Find Size of int, float, double and char in your computer.

#include <iostream>
using namespace std;

int main() 
{    
    cout << "Size of char: " << sizeof(char);
    cout << "\nSize of int: " << sizeof(int);
    cout << "\nSize of float: " << sizeof(float);
    cout << "\nSize of double: " << sizeof(double) << endl;
    return 0;
}