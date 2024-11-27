//Write a program to reverse a string.

#include <iostream>
#include <algorithm> // For std::reverse
using namespace std;

int main() {
    string input_string = "Hello, World!";
    string reversed_string = input_string; // Copy the original string

    // Reverse the string
    reverse(reversed_string.begin(), reversed_string.end());

    cout << "Original String: " << input_string << endl;
    cout << "Reversed String: " << reversed_string << endl;

    return 0;
}



// //Iterrative Method
// #include <iostream>
// #include <string>
// using namespace std;

// void reverseStringIterative(string &s) {
//     int n = s.length();
//     for (int i = 0; i < n / 2; i++) {
//         swap(s[i], s[n - i - 1]);  // Swap characters from both ends
//     }
// }

// int main() {
//     string s = "hello";
//     reverseStringIterative(s);
//     cout << "Reversed string (iterative): " << s << endl;  // Output: "olleh"
//     return 0;
// }



// //Recursive Method
// #include <iostream>
// #include <string>
// using namespace std;

// void reverseStringRecursive(string &s, int start, int end) {
//     if (start >= end) {
//         return;  // Base case: when start crosses end
//     }
//     swap(s[start], s[end]);  // Swap characters
//     reverseStringRecursive(s, start + 1, end - 1);  // Recursive call for the next pair
// }

// int main() {
//     string s = "world";
//     reverseStringRecursive(s, 0, s.length() - 1);
//     cout << "Reversed string (recursive): " << s << endl;  // Output: "dlrow"
//     return 0;
// }
