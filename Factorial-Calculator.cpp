#include <iostream>
using namespace std;

int main() {
    cout << "=== Factorial Calculator ===" << endl;

    int number;
    int factorial = 1;

    cout << "Enter a positive integer (≤ 12): ";
    cin >> number;

    if (number < 0) {
        cout << "Factorial is not defined for negative numbers." << endl;
    } else if (number > 12) {
        cout << "Number too large. Use a number ≤ 12 to avoid integer overflow." << endl;
    } else {
        for (int i = 1; i <= number; ++i) {
            factorial *= i;
        }
        cout << "Factorial of " << number << " is: " << factorial << endl;
    }

    return 0;
}
