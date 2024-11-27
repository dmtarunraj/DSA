#include<bits/stdc++.h>
using namespace std;

class CircularQueue{
    int* arr;
    int size;
    int front, rear;

    public:
    CircularQueue(int n){
        size = 100001;
        arr = new int[size];
        front = rear = -1;
    }

    bool enqueue(int value){
        if((front == 0 && rear == size-1) || (rear == (front-1)%(size-1))){
            cout << "Queue is full\n";
            return false;
        }
        else if(front == -1)
        { // first element to push
            front = rear = 0;
        }
        else if(rear == size-1 && front != 0)
        {
            rear =0;
        }
        else
        {
            rear++;
        }
        arr[rear] = value;

        return true;
    }

    int dequeue(){

        if(front == -1){
            cout << "Queue is empty\n";
            return -1;
        }

        int ans = arr[front];
        arr[front] = -1;
        if(front == rear){ //single element
            front = rear = -1;
        }
        else if(front == size-1){
            front = 0;
        }
        else {
            front++;
        }
        return ans;
    }

    int getFront() {
        if (front == -1) {
            return -1; // Queue is empty
        }
        return arr[front];
    }

    bool isEmpty() {
        return front == -1;
    }
};

int main(){

    // Create a CircularQueue of size 5
    CircularQueue cq(5);

    // Enqueue some elements
    cq.enqueue(10);
    cq.enqueue(20);
    cq.enqueue(30);
    cq.enqueue(40);
    cq.enqueue(50);

    // Trying to enqueue to a full queue
    if (!cq.enqueue(60)) {
        cout << "Cannot enqueue 60, queue is full.\n";
    }

    // Dequeue some elements
    cout << "Dequeued: " << cq.dequeue() << endl; // Should dequeue 10
    cout << "Dequeued: " << cq.dequeue() << endl; // Should dequeue 20

    // Enqueue again
    cq.enqueue(60);
    cq.enqueue(70);

    // Dequeue remaining elements
    while (!cq.isEmpty()) {
        cout << "Dequeued: " << cq.dequeue() << endl;
    }

    // Trying to dequeue from an empty queue
    if (cq.dequeue() == -1) {
        cout << "Cannot dequeue, queue is empty.\n";
    }

    return 0;
}