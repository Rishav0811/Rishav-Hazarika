// This code is developed by Rishav
#include <iostream>
#include <cmath>  // For sin, cos, exp, etc.
using namespace std;

// Define the function to integrate
double f(double x, int choice) {
    switch (choice) {
        case 1: return x * x;             // f(x) = x^2
        case 2: return sin(x);            // f(x) = sin(x)
        case 3: return cos(x);            // f(x) = cos(x)
        case 4: return exp(x);            // f(x) = e^x
        default:
            cout << "Invalid function choice.\n";
            return 0;
    }
}

int main() {
    double a, b, h, result;
    int n, funcChoice;

    // Ask user to choose a function
    cout << "Choose a function to integrate:\n";
    cout << "1. f(x) = x^2\n";
    cout << "2. f(x) = sin(x)\n";
    cout << "3. f(x) = cos(x)\n";
    cout << "4. f(x) = e^x\n";
    cout << "Enter your choice (1-4): ";
    cin >> funcChoice;

    // Get integration limits and number of intervals
    cout << "Enter lower limit (a): ";
    cin >> a;
    cout << "Enter upper limit (b): ";
    cin >> b;
    cout << "Enter number of intervals (n - even number): ";
    cin >> n;

    // Check if n is even
    if (n % 2 != 0) {
        cout << "Error: Number of intervals must be even.\n";
        return 1;
    }

    h = (b - a) / n;  // Calculate step size
    result = f(a, funcChoice) + f(b, funcChoice);  // First and last terms

    // Apply Simpson's 1/3 Rule
    for (int i = 1; i < n; i++) {
        double x = a + i * h;
        if (i % 2 == 0) {
            result += 2 * f(x, funcChoice);
        } else {
            result += 4 * f(x, funcChoice);
        }
    }

    result = (h / 3) * result;

    // Show result
    cout << "Approximate integral = " << result << endl;

    return 0;
}


