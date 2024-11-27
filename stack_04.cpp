#include <iostream>
using namespace std;

class Stack {
private:
    char* arr;
    int top;
    int capacity;

public:
    Stack(int size) {
        arr = new char[size];
        capacity = size;
        top = -1;
    }

    ~Stack() {
        delete[] arr;  // Clean up allocated memory
    }

    void push(char c) {
        if (top == capacity - 1) {
            cout << "Stack overflow" << endl;
            return;
        }
        arr[++top] = c;  // Push character onto the stack
    }

    char pop() {
        if (top == -1) {
            cout << "Stack underflow" << endl;
            return '\0';  // Return null character if stack is empty
        }
        return arr[top--];  // Pop character from the stack
    }

    bool isEmpty() {
        return top == -1;  // Check if the stack is empty
    }
};

string reverseString(const string& s) {
    Stack stack(s.length());  // Create a stack with the size of the string
    string reversedStr;

    // Push all characters of the string onto the stack
    for (char c : s) {
        stack.push(c);
    }

    // Pop all characters from the stack to form the reversed string
    while (!stack.isEmpty()) {
        reversedStr += stack.pop();
    }

    return reversedStr;
}

int main() {
    string inputString = "Hello, World!";
    string reversedString = reverseString(inputString);
    
    cout << "Original String: " << inputString << endl;
    cout << "Reversed String: " << reversedString << endl;

    return 0;
}
