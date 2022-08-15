#include <iostream>
#define n 100
using namespace std;

class stack {
    int* ar;
    int top;
    public:
    stack() {
        ar = new int[n];
        top = -1;
    }

    void push(int x) {
        if(top == n-1) {
            cout << "Stack Overflow" << endl;
            return;
        }
        top ++;
        ar[top] = x;
    }
    void pop() {
        if(top == -1) {
            cout << "No elements in stack!" << endl;
            return;
        }
        top--;
    }
    int peek() {
        if(top == -1) {
            cout << "No elements in stack!" << endl;
            return -1;
        }
        return ar[top];
    }
    bool empty() {
        return top==-1;
    }
};


int main() {
    stack st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.pop();
    st.pop();
    // st.pop();
    if(st.empty()) cout << "YES" <<endl;
    else cout << "NO" <<endl;
    return 0;
}