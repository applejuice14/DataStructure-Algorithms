#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;
};

node* insertAtTheEnd(node*head,int x)
{
    node*temp=new node();
    node*ptr=head;
    temp->data=x;
    temp->next=NULL;
    if(head==NULL)
    {
        head=temp;
    }
    else
    {
        while(ptr->next!=NULL)
        {
            ptr=ptr->next;
        }
        ptr->next=temp;
    }
    return head;
}

void printList(node* head)
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
    node*head=NULL;
    int n,x;
    cout<<"How many numbers you want to enter?\n";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cout<<"enter the number\n";
        cin>>x;
        head=insertAtTheEnd(head,x);
    }
    printList(head);
    return 0;
}