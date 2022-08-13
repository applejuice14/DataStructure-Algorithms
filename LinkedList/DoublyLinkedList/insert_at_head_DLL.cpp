#include <iostream>
using namespace std;

class node {
    public:
    int data;
    node* next;
    node* prev;
};

void insert_at_head(node* &head, int d) {
    node* temp = new node;
    temp -> data = d;
    temp -> next = NULL;
    temp -> prev = NULL;
    if(head == NULL) {
        head = temp;
        return;
    }
    temp -> next = head;
    head -> prev = temp;
    head = temp;
    return;
}

void printList(node* &head) {
    node* temp = head;
    while(temp != NULL) {
        cout << temp -> data<< " ";
        temp = temp -> next;
    }
    cout << endl;
}
int main()
{
    node* head = NULL;
    insert_at_head(head, 10);
    insert_at_head(head, 20);
    insert_at_head(head, 30);
    insert_at_head(head, 40);
    insert_at_head(head, 50);
    printList(head);
    return 0;
}