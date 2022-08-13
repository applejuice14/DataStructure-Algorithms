#include <iostream>
using namespace std;

class node {
    public:
    int data;
    node* next;
    node* prev;
};

void insert_at_tail(node* &head, int d) {
    node* temp = new node;
    temp -> data = d;
    temp -> next = NULL;
    temp -> prev = NULL;
    if(head == NULL) {
        head =  temp;
        return;
    }  
    else {
        node* tail = head;
        while(tail -> next != NULL) {
            tail = tail -> next;
        }
        tail -> next = temp;
        temp -> prev = tail -> next;
        return;
    }
}

void printList(node* &head) {
    node* temp = head;
    while(temp != NULL) {
        cout << temp -> data << " ";
        temp = temp ->next; 
    }
    cout << endl;
}
int main()
{
    node* head = NULL;
    insert_at_tail(head, 10);
    insert_at_tail(head, 20);
    insert_at_tail(head, 30);
    insert_at_tail(head, 40);
    printList(head);
    return 0;
}