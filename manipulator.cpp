
#include <iostream>
#include <iomanip> 

using namespace std;

int main() {
    double num = 123.456789;

    cout << "Original number: " << num << endl;

    // Using setw() to set the width of output
    cout << "Using setw(10): " << setw(10) << num << endl;

    // Using setprecision() to set the precision of floating-point output
    cout << "Using setprecision(4): " << setprecision(4) << num << endl;

    // Using fixed and setprecision() to fix the number of decimal places
    cout << "Using fixed and setprecision(2): " << fixed << setprecision(2) << num << endl;

    // Using setfill() to set the fill character for setw()
    cout << "Using setw(10) and setfill(''): " << "setfill('')" << setw(10) << num << endl;

    // Using scientific notation
    cout << "Using scientific notation: " << scientific << num << endl;

    // Resetting formatting flags
    cout.unsetf(ios::fixed | ios::scientific);
    cout << "Resetting formatting flags: " << num << endl;

    return 0;
}

