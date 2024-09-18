/*
Problem Statement



Lena is a librarian managing a list of books in her library. Each book is represented by an integer ID. Lena needs to update her list by adding a new book ID to the beginning of the list, another ID to the end, and a third ID at a random position within the list.



Your task is to help Lena implement a function to perform these insertions and manage the book list efficiently.
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
        data = data1;
        next = next1;
    };
};

void insert(Node *&head, int data)
{
    Node *temp = new Node(head, data);
    head = temp;
};

void insertatend(Node *&head, Node *&tail, int data)
{
    Node *temp = new Node(nullptr, data);
    if (temp == nullptr)
    {
        head = temp;
    }
    else
    {
        tail->next = temp;
    }
    tail = temp;
};

void insertatanyposition(Node *&head, Node *&tail, int data, int position)
{
    if (position == 0)
    {
        insert(head, data);
        return;
    };
    int cnt = 1;
    Node *temp = head;
    Node *newnode = new Node(head, data);
    while (cnt < position)
    {
        temp = temp->next;
        cnt++;
    }
    newnode->next = temp->next;
    temp->next = newnode;
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
    Node *head = nullptr;
    Node *tail = nullptr;
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
        if (tail == nullptr)
        {
            tail = head;
        };
    };
    int value1;
    cin >> value1;
    insert(head, value1);
    int value2;
    cin >> value2;
    insertatend(head, tail, value2);
    int pos;
    cin >> pos;
    int value3;
    cin >> value3;
    insertatanyposition(head, tail, value3, pos);

    print(head);
}