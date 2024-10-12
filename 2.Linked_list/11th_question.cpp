/*
Problem Statement



Raj, a mechanic, uses a linked list to track the cars waiting for repair. He needs to remove a car with a particular license plate number and also delete a car from a specific position in his list. Assist Raj by writing a program that allows him to perform these deletions based on given inputs.

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
            this->next = nullptr;
            delete next;
        }
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
    };
};

void insert(Node *&head, int data)
{
    Node *temp = new Node(head, data);
    head = temp;
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
    int value;
    cin >> value;
    int pos = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == value)
        {
            pos = i;
        };
    };
    deletenode(head, pos + 1);
    int pos1;
    cin >> pos1;
    deletenode(head, pos1 + 1);
    print(head);
};
