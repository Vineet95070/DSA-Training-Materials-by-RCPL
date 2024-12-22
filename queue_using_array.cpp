#include <iostream>
using namespace std;

#define n 5

class queue {
    public:
        int arr[n];
        int begin = -1;
        int rear = -1;

    void push(int);
    void pop();
    int front();
    int back();
    bool empty();
};

void queue::push(int val) {
    // Check if the queue is full
    if (rear == n - 1) {
        cout << "Queue overflow: \n";
        return;
    }
    
    if (begin == -1) {
        begin++;  // Initialize the queue
    }

    rear++;
    arr[rear] = val;
    cout << "Pushed " << val << " to queue.\n";
}

void queue::pop() {
    // Check if the queue is empty
    if (begin == -1 || begin > rear) {
        cout << "Queue underflow: \n";
        return;
    }
    
    cout << "Popped " << arr[begin] << " from queue.\n";
    begin++;

    // If queue becomes empty after pop, reset begin and rear
    if (begin > rear) {
        begin = rear = -1;
    }
}

bool queue::empty() {
    return begin == -1 || begin > rear;
}

int queue::front() {
    if (empty()) {
        cout << "Queue is empty. No front element.\n";
        return -1;  // Indicate empty queue
    }
    return arr[begin];
}

int queue::back() {
    if (empty()) {
        cout << "Queue is empty. No rear element.\n";
        return -1;  // Indicate empty queue
    }
    return arr[rear];
}

int main() {
    queue q;

    if (q.empty())
        cout << "Queue is empty: \n";
    else
        cout << "Queue is not empty: \n";
    
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    
    // Try to push when queue is full
    q.push(60); // This should print overflow message

    cout << "Front: " << q.front() << endl;
    cout << "Back: " << q.back() << endl;

    // Pop elements from the queue
    q.pop();
    q.pop();

    cout << "Front: " << q.front() << endl;
    cout << "Back: " << q.back() << endl;

    return 0;
}
