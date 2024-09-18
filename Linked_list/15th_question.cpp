/*
Problem Statement



Sharon is managing a list of items in her online store. She needs to track and display the number of items added to her inventory each day. To do this, she decides to use a grounded header linked list structure where each node represents an item added to the inventory.



Guide Sharon in completing the program.
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

void print(Node *&head)
{
    Node *temp = head;
    int count = 0;
    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    };
    cout << count;
};

int main()
{
    Node *head = nullptr;
    int i = 1;
    while (i < 100)
    {
        int a;
        cin >> a;
        if (a != -1)
        {
            insert(head, a);
        }
        i++;
    };
    print(head);
};