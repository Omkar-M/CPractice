// Write a Program which accepts coefficients of a quadratic equation from the user and displays the roots (both real and complex roots depending upon the discriminant).

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    float a, b, c, x1, x2, discrim, real, imag;
    cout << "Enter coefficients a, b and c: ";
    cin >> a >> b >> c;
    discrim = b*b - 4*a*c;
    if (discrim > 0) {
        x1 = (-b + sqrt(discrim)) / (2*a);
        x2 = (-b - sqrt(discrim)) / (2*a);
        cout << "Roots are real and different." << endl;
        cout << "x1 = " << x1 << endl;
        cout << "x2 = " << x2 << endl;
    }
    else if (discrim == 0) {
        cout << "Roots are real and same." << endl;
        x1 = -b/(2*a);
        cout << "x1 = x2 =" << x1 << endl;
    }
    else {
        real = -b/(2*a);
        imag =sqrt(-discrim)/(2*a);
        cout << "Roots are complex and different."  << endl;
        cout << "x1 = " << real << "+" << imag << "i" << endl;
        cout << "x2 = " << real << "-" << imag << "i" << endl;
    }
    return 0;
}