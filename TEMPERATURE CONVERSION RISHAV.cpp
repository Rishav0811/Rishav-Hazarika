//This code is developed by Rishav 
#include <iostream>   // For input and output
using namespace std;

int main() {
    int n;              // Variable to store user input
    double sum = 0.0;   // Variable to store the sum, use double for decimal

    // Ask the user to enter a positive integer
    cout << "Enter a positive integer n: ";
    cin >> n;

    // Check if the input is valid
    if (n <= 0) {
        cout << "Please enter a number greater than 0." << endl;
        return 1; // Exit the program with error code
    }

    // Loop to compute the sum of the series
    for (int i = 1; i <= n; ++i) {
        sum += 1.0 / i; // Add 1/i to the sum
    }

    // Display the result
    cout << "Sum of the series 1 + 1/2 + 1/3 + ... + 1/" << n << " is: " << sum << endl;

    return 0; // End of program
}


