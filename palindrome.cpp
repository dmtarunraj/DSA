//Write a program to check if a number is a palindrome or not.

#include <iostream>
using namespace std;

bool is_palindrome(int n) {
    int original = n, reversed = 0;

    // Reverse the number
    while (n > 0) {
        reversed = reversed * 10 + n % 10;
        n /= 10;
    }

    return original == reversed;  // Check if original and reversed are the same
}

int main() {
    int number = 12321;
    if (is_palindrome(number)) {
        cout << number << " is a palindrome." << endl;
    } else {
        cout << number << " is not a palindrome." << endl;
    }
    return 0;
}
