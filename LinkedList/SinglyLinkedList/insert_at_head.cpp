#include <iostream>
using namespace std;

class node {
    public:
    int data;
    node* next;
};

void insertAtHead(node* &head, int d) {
    node* temp = new node;
    temp -> data = d;
    temp -> next = head;
    head = temp;
}

void printList(node* &head) {
    node* temp = head;
    while(temp != NULL) {
        cout << temp -> data<<" ";
        temp = temp -> next;
    }
    cout << endl;
}
int main()
{
    node* head = NULL;    

    insertAtHead(head,10);
    insertAtHead(head,20);
    insertAtHead(head,30);
    insertAtHead(head,40);
    insertAtHead(head,50);

    printList(head);
    return 0;
}