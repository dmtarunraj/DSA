#include<bits/stdc++.h>
using namespace std;

class Queue {
    int* arr;
    int front;
    int rear;
    int size;

public:
    Queue() {
        size = 100001; // Set the size of the queue
        arr = new int[size]; // Allocate memory for the queue
        front = 0;
        rear = 0;
    }

    bool isEmpty() {
        return front == rear;
    }

    void enqueue(int data) {
        if (rear == size) {
            cout << "Queue is full" << endl;
        } else {
            arr[rear] = data;
            rear++;
        }
    }

    int dequeue() { // Changed the parameter list to be empty
        if (front == rear) {
            return -1; // Added the semicolon
        } else {
            int ans = arr[front];
            arr[front] = -1;
            front++;
            // Reset front and rear if the queue becomes empty
            if (front == rear) {
                front = 0;
                rear = 0;
            }
            return ans;
        }
    }

    int getFront() { // Renamed the method to avoid conflict
        if (front == rear) {
            return -1; // Added the semicolon
        } else {
            return arr[front];
        }
    }
};

int main() {
    Queue q;

    // Test the queue functionality
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);

    cout << "Front element: " << q.getFront() << endl; // Should print 10
    cout << "Dequeue: " << q.dequeue() << endl; // Should remove 10
    cout << "Front element after dequeue: " << q.getFront() << endl; // Should print 20

    return 0;
}
