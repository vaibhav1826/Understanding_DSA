/*
Problem Statement



Jake maintains a linked list of his gym members, each represented by a unique membership number. Jake needs to check if a particular membership number is part of his list of active members. Write a solution to help Jake find out if the membership number exists in his linked list.
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

void compare(Node *&head, int data)
{
    Node *temp = head;
    bool found = false;
    while (temp != NULL)
    {
        if (temp->data == data)
        {
            found = true;
            break;
        }
        temp = temp->next;
    };
    if (found)
    {
        cout << "Membership number " << data << " is active";
    }
    else
    {
        cout << "Membership number " << data << " is not in the list";
    }
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
        int a;
        cin >> a;
        insert(head, a);
    };
    int value;
    cin >> value;
    compare(head, value);
}