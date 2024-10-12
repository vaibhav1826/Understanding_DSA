/*
Problem Statement



Kamal wants to create a linked list and perform the following operations on it:

Insert a node at the beginning of the linked list.
After inserting, append a node at the end of the linked list.
Print the final linked list.


Write a program that takes the number of nodes to be inserted, followed by their values, as input. After inserting the nodes, the program should ask for a new value and append a node with that value at the end of the linked list. Finally, the program should print the contents of the linked list.

*/

#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node(Node *next1, int data1)
    {
        next = next1;
        data = data1;
    };
};

void insert(Node *&head, int data)
{
    Node *temp = new Node(head, data);
    head = temp;
};

void insertattail(Node *&tail, Node *&head, int data)
{
    Node *temp = new Node(nullptr, data);
    if (tail != nullptr)
    {
        tail->next = temp;
    }
    else
    {
        head = temp;
    }
    tail->next = temp;
};

void print(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
};

int main()
{
    int size;
    cin >> size;
    Node *head = nullptr;
    Node *tail = nullptr;
    for (int i = 0; i < size; i++)
    {
        int a;
        cin >> a;
        insert(head, a);
        if (tail == nullptr)
        {
            tail = head;
        }
    }
    cout << "Created Linked list: ";
    print(head);
    int c;
    cin >> c;
    insertattail(tail, head, c);
    cout << "Final List: ";
    print(head);
};
