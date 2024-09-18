/*
Problem Statement



Madhan is developing a contact management system for a mobile application. The system allows users to maintain a list of their contacts. Whenever a user adds a new contact, the system should add it at the end of the contact list.



Write a program for Madhan to implement the code to perform insertion at the end
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
    print(head);
};