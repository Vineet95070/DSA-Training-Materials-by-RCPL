#include <iostream>

#define n 5
using namespace std;

class queue {
public:
    int arr[n];
    int front = -1;
    int rear = -1;

    void insertFront(int);
    void insertRear(int);
    void deleteFront();
    void deleteRear();
    int getFront();
    int getRear();
    bool isEmpty();
    bool isFull();
};

bool queue::isFull() {
    // Queue is full if rear is just before front (circular condition)
    return (front == 0 && rear == n - 1) || (rear == (front - 1) % n);
}

bool queue::isEmpty() {
    return front == -1;
}

void queue::insertFront(int val) {
    if (isFull()) {
        cout << "Overflow: Queue is full\n";
        return;
    }

    if (isEmpty()) {
        front = rear = 0;
    } else if (front == 0) {
        front = n - 1;
    } else {
        front--;
    }

    arr[front] = val;
    cout << "Inserted " << val << " at the front.\n";
}

void queue::insertRear(int val) {
    if (isFull()) {
        cout << "Overflow: Queue is full\n";
        return;
    }

    if (isEmpty()) {
        front = rear = 0;
    } else if (rear == n - 1) {
        rear = 0;  // Wrap around
    } else {
        rear++;
    }

    arr[rear] = val;
    cout << "Inserted " << val << " at the rear.\n";
}

void queue::deleteFront() {
    if (isEmpty()) {
        cout << "Underflow: Queue is empty\n";
        return;
    }

    cout << "Deleted " << arr[front] << " from the front.\n";

    if (front == rear) {
        // Queue becomes empty after this deletion
        front = rear = -1;
    } else if (front == n - 1) {
        front = 0;  // Wrap around
    } else {
        front++;
    }
}

void queue::deleteRear() {
    if (isEmpty()) {
        cout << "Underflow: Queue is empty\n";
        return;
    }

    cout << "Deleted " << arr[rear] << " from the rear.\n";

    if (front == rear) {
        // Queue becomes empty after this deletion
        front = rear = -1;
    } else if (rear == 0) {
        rear = n - 1;  // Wrap around
    } else {
        rear--;
    }
}

int queue::getFront() {
    if (isEmpty()) {
        cout << "Queue is empty. No front element.\n";
        return -1;
    }
    return arr[front];
}

int queue::getRear() {
    if (isEmpty()) {
        cout << "Queue is empty. No rear element.\n";
        return -1;
    }
    return arr[rear];
}

int main() {
    queue q;

    q.insertRear(10);
    q.insertRear(20);
    q.insertFront(5);
    q.insertFront(1);
    q.insertRear(30);

    cout << "Front element: " << q.getFront() << endl;
    cout << "Rear element: " << q.getRear() << endl;

    q.deleteFront();
    q.deleteRear();

    cout << "Front element after deletions: " << q.getFront() << endl;
    cout << "Rear element after deletions: " << q.getRear() << endl;

    return 0;
}
