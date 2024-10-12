/*
Problem Statement



Vijay is creating a linked list and wants to perform different operations on it. She can append values either to the left (beginning) or right (end) of the linked list. She also wants to print the linked list at any point in time.



He wants to be able to perform the following operations:

1: Append Left: Append a node at the beginning(left) of the linked list.

2: Append Right: Append a node at the end(right) of the linked list.

3: Print: Print the contents of the linked list.

4: Exit: Exit the program.



Company tags: Accenture
*/

// You are using GCC
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
void appendLeft(Node *&head, int val)
{
    Node *temp = new Node(head, val);
    head = temp;
};

void appendRight(Node *&head, Node *&tail, int val)
{
    Node *temp = new Node(nullptr, val);
    if (tail != nullptr)
    {
        tail->next = temp;
    }
    else
    {
        head = temp;
    }
    tail = temp;
};

void print(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    };
    cout << endl;
};

int main()
{
    Node *head = nullptr;
    Node *tail = nullptr;
    int choice;
    int val;
    do
    {
        cin >> choice;

        switch (choice)
        {
        case 1:
            cin >> val;
            appendLeft(head, val);
            if (tail == nullptr)
            {
                tail = head;
            }
            break;
        case 2:
            cin >> val;
            appendRight(head, tail, val);
            break;
        case 3:
            cout << "Linked List: ";
            print(head);
            break;
        case 4:
            break;
        default:
            cout << "Invalid choice";
        }

    } while (choice != 4);

    return 0;
}