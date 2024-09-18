/*
Problem Statement



Sarah keeps a two-way linked list of her favorite recipes, each represented by an integer code. She wants to traverse the list to review all recipes, insert a new recipe at the end, and remove a recipe based on its code. Write a program to assist Sarah with these tasks.
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
        };
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
    Node *head = NULL;
    int size;
    cin >> size;
    int arr[size + 1];
    for (int i = 0; i <= size; i++)
    {
        cin >> arr[i];
    };
    for (int i = size; i >= 0; i--)
    {
        insert(head, arr[i]);
    };
    int value;
    cin >> value;
    int position = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == value)
        {
            position = i;
        }
    };
    print(head);
    deletenode(head, position + 1);
    print(head);
};