/*Write a program where the user is asked to enter two integers (divisor and dividend) and the quotient and the remainder of their division is computed.(Both divisor and
dividend should be integers.)
*/
#include <iostream>
using namespace std;

int main()
{    
    int divisor, dividend, quotient, remainder;

    cout << "Enter dividend: ";
    cin >> dividend;
    cout << "Enter divisor: ";
    cin >> divisor;
    quotient = dividend / divisor;
    remainder = dividend % divisor;
    cout << "Quotient = " << quotient << endl << "Remainder = " << remainder;
    return 0;
}