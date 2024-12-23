#include <iostream>
#include <vector>
using namespace std;

class MyCircularQueue {
    vector<int> queue;
    int head, tail, size, capacity;

public:
    MyCircularQueue(int k) : queue(k), head(-1), tail(-1), size(0), capacity(k) {}

    bool enQueue(int value) {
        if (isFull()) return false;
        if (isEmpty()) head = 0;
        tail = (tail + 1) % capacity;
        queue[tail] = value;
        size++;
        return true;
    }

    bool deQueue() {
        if (isEmpty()) return false;
        if (head == tail) head = tail = -1;
        else head = (head + 1) % capacity;
        size--;
        return true;
    }

    int Front() { return isEmpty() ? -1 : queue[head]; }
    int Rear() { return isEmpty() ? -1 : queue[tail]; }
    bool isEmpty() { return size == 0; }
    bool isFull() { return size == capacity; }
};

int main() {
    int k, choice, value;
    cout << "Enter queue size: ";
    cin >> k;
    MyCircularQueue q(k);

    while (true) {
        cout << "1.enQueue 2.deQueue 3.Front 4.Rear 5.isEmpty 6.isFull 7.Exit\nChoice: ";
        cin >> choice;
        switch (choice) {
            case 1: cin >> value; cout << (q.enQueue(value) ? "Enqueued\n" : "Full\n"); break;
            case 2: cout << (q.deQueue() ? "Dequeued\n" : "Empty\n"); break;
            case 3: cout << q.Front() << endl; break;
            case 4: cout << q.Rear() << endl; break;
            case 5: cout << (q.isEmpty() ? "Empty\n" : "Not Empty\n"); break;
            case 6: cout << (q.isFull() ? "Full\n" : "Not Full\n"); break;
            case 7: return 0;
            default: cout << "Invalid\n";
        }
    }
}
