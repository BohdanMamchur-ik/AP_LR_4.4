#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double xp, xk, dx, x, y;

    cout << "xp = "; cin >> xp;
    cout << "xk = "; cin >> xk;
    cout << "dx = "; cin >> dx;

    cout << fixed;
    cout << "----------------------\n";
    cout << "|" << setw(7) << "x" << " |" << setw(10) << "y" << " |\n";
    cout << "----------------------\n";

    x = xp;
    while (x <= xk) {
        if (x >= -7.0 && x < -3.0) {
            y = x + 7.0;
        }
        else if (x >= -3.0 && x < -2.0) {
            y = 4.0;
        }
        else if (x >= -2.0 && x <= 2.0) {
            y = x * x;
        }
        else if (x > 2.0 && x <= 4.0) {
            y = -2.0 * x + 8.0;
        }
        else {
            y = 0.0; // Поза межами заданого графіка
        }

        cout << "|" << setw(7) << setprecision(2) << x
            << " |" << setw(10) << setprecision(3) << y << " |\n";
        x += dx;
    }
    cout << "----------------------\n";
    return 0;
}