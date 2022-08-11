#include <iostream>
using namespace std;

class node {
    public:
    int data;
    node* next;
};

void insert_at_nth(node* &head, int n, int d) {
    node* temp = new node;
    temp -> data = d;
    temp -> next = NULL;

    if(n == 1) {
        temp -> next = head;
        head = temp;
        return;
    }

    node* ptr = head;
    for(int i = 1; i < n-1; i++) {
        ptr = ptr -> next;
    }
    temp -> next = ptr -> next;
    ptr -> next = temp;
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
    insert_at_nth(head,1,12);
    insert_at_nth(head,2,5);
    insert_at_nth(head,3,10);
    insert_at_nth(head, 1, 100);
    printList(head);
    return 0;
}