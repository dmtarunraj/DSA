#include <bits/stdc++.h>
using namespace std;

// Function to find the integer part of the square root using binary search
double binary(int n) {
    int s = 0;
    int e = n;
    long long int mid = s + (e - s) / 2;
    double ans = -1;

    // Binary search for the integer part of the square root
    while (s <= e) {
        long long int square = mid * mid;

        if (square == n) {
            return mid; // Exact square root found
        }

        if (square < n) {
            ans = mid; // Store potential answer
            s = mid + 1;
        } else {
            e = mid - 1;
        }

        mid = s + (e - s) / 2;
    }

    return ans; // Return the floor value of the square root
}

// Function to find the square root with decimal precision
double sqrtWithPrecision(int n, int precision) {
    double intPart = binary(n);  // Integer part of the square root
    double increment = 0.1;      // Start with 0.1 for the first decimal place

    // Calculate fractional part up to the specified precision
    for (int i = 0; i < precision; i++) {
        while (intPart * intPart <= n) {
            intPart += increment;
        }

        // Backtrack by one step to stay below n
        intPart -= increment;

        // Move to the next decimal place
        increment /= 10;
    }

    return intPart;
}

int main() {
    int n;
    cout << "Enter the number: ";
    cin >> n;

    int precision;
    cout << "Enter the number of decimal places: ";
    cin >> precision;

    double result = sqrtWithPrecision(n, precision);
    cout << fixed << setprecision(precision);
    cout << "The square root of " << n << " is: " << result << endl;

    return 0;
}
