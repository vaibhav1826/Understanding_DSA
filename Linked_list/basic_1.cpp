// basic program to insert at the head in linked list

#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

// function to insert in linked list at head
void InsertAthead(Node *&head, int d)
{
    // new node create
    Node *temp = new Node(d);
    temp->next = head;
    head = temp;
}

// function for printing the linked list
void print(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{
    Node *node1 = new Node(10);

    // head pointing toward the node1
    Node *head = node1;
    cout << "Before insertion : ";
    print(head);
    cout << "After insertion : ";
    InsertAthead(head, 12);
    print(head);
    cout << "After insertion : ";
    InsertAthead(head, 14);
    print(head);
}