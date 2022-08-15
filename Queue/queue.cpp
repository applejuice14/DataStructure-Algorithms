#include <iostream>
#define n 100
using namespace std;

class queue {
    int* ar;
    int front;
    int back;
    public:
    queue() {
        ar = new int[n];
        front = back = -1;
    }

    void enqueue(int x) {
        if(back == n-1) {
            cout << "Queue Overflow" << endl;
            return;
        }
        back++;
        ar[back] = x;
        if(front == -1) {
            front++;
        }
    }
    void dequeue() {
        if(front == -1 or front > back) {
            cout << "No elements in queue" << endl;
            return;
        }
        front++;
    }
    int peek() {
        if(front == -1 or front > back) {
            cout << "No elements in queue" << endl;
            return -1;
        }
        return ar[front];
    }
    bool empty() {
        return front = back == -1;
    }
};
int main()
{
    queue qt;
    qt.enqueue(1);
    qt.enqueue(2);
    qt.dequeue();
    qt.dequeue();
    cout << qt.peek();
    return 0;
}