/*
Tom manages a library system where books are categorized by their ID numbers in ascending order. He wants to maintain the order of books using a two-way linked list. Each time a new book is added, it should be placed in the correct position to keep the list sorted. Tom also wants to insert a final book after all the initial books have been added.
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

void sorted(Node *&head, int size)
{
    Node *temp = head;
    int arr[size];
    int a = 0;
    while (temp != nullptr)
    {
        arr[a] = temp->data;
        temp = temp->next;
        a++;
    };
    for (int i = 0; i < size; i++)
    {
        for (int j = i; j < size; j++)
        {
            if (arr[i] > arr[j])
            {
                swap(arr[i], arr[j]);
            }
        }
    }

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    };
};

void insert(Node *&head, int data)
{
    Node *temp = new Node(head, data);
    head = temp;
};

int main()
{
    Node *head = nullptr;
    int size;
    cin >> size;
    for (int i = 0; i < size; i++)
    {
        int b;
        cin >> b;
        insert(head, b);
    };
    int value;
    cin >> value;
    insert(head, value);
    sorted(head, size + 1);
};
