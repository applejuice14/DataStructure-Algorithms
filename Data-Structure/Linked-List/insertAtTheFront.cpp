#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;
};

node* insertAtTheFront(node* head,int x)
{
    node*temp=new node();
    temp->data=x;
    temp->next=NULL;
    if(head!=NULL)
    {
        temp->next=head;
    }
    head=temp;
    return head;
}

void printList(node*head)
{
    cout<<"List is: ";
    while(head!=NULL)
    {
        cout<<head->data<<" ";
        head=head->next;
    }
    cout<<endl;
}
int main()
{
    node* head=NULL;
    int n,x;
    cout<<"How many numbers you want to enter?\n";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cout<<"enter the number\n";
        cin>>x;
        head=insertAtTheFront(head,x);
    }
    printList(head);
    return 0;
}