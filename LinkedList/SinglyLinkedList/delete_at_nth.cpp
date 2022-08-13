#include <iostream>
using namespace std;

class node {
    public:
    int data;
    node* next;
};

void insertAtTail(node* &head, int d) {
    node* temp = new node;
    temp -> data = d;
    temp -> next = NULL;

    if(head == NULL) {
        head = temp;
    }
    else {
        node* tail = head;
        while(tail -> next != NULL) {
            tail = tail -> next;
        }
        tail -> next = temp;
    }
}

void delete_nth(node* &head, int n) {
    node* temp = head;
    if(n == 1) {
        head = temp -> next;
        delete temp;
        return;
    }
    else {
        for(int i = 1; i < n-1; i++) {
            temp = temp -> next;
        }
        node* ptr = temp -> next;
        temp -> next = ptr -> next;
        delete ptr;
    }
}

void printList(node* &head) {
    node* temp = head;
    while(temp != NULL) {
        cout << temp -> data << " ";
        temp = temp -> next;
    }
    cout << endl;
}
int main()
{
    node* head = NULL;
    insertAtTail(head, 10);
    insertAtTail(head, 20);
    insertAtTail(head, 30);
    delete_nth(head, 1);
    delete_nth(head, 1);
    printList(head);
    return 0;
}