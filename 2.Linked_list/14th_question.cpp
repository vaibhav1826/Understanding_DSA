/*
Problem Statement



In a warehouse, a system keeps track of packages using a grounded header linked list where each node represents a package. Each package is added to the end of the list. Sometimes, packages need to be removed from specific positions in the list.



Your task is to implement this system which can add packages to the list, display the list, and remove a package from a specified position.
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
    ~Node()
    {
        if (this->next != nullptr)
        {
            this->next = NULL;
            delete next;
        };
    };
};

void deletenode(Node *&head, int position)
{
    if (position == 1)
    {
        Node *temp = head;
        head = head->next;
        delete temp;
    }
    else
    {
        int cnt = 1;
        Node *current = head;
        Node *previous = NULL;
        while (cnt < position)
        {
            previous = current;
            current = current->next;
            cnt++;
        }
        previous->next = current->next;
    }
};

void insert(Node *&head, int data)
{
    Node *temp = new Node(head, data);
    head = temp;
};

void print(Node *&head)
{
    Node *temp = head;
    while (temp != nullptr)
    {
        cout << temp->data << " ";
        temp = temp->next;
    };
    cout << endl;
};

int main()
{
    Node *head = nullptr;
    int size;
    cin >> size;
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    };
    for (int i = size - 1; i >= 0; i--)
    {
        insert(head, arr[i]);
    };
    cout << "Linked List before deletion: ";
    print(head);
    int pos;
    cin >> pos;
    deletenode(head, pos);
    cout << "Linked List after deletion: ";
    print(head);
};