/*
Problem Statement



Sarath is developing a text document editor that supports adding text lines at both the beginning and the end of the document. The editor should first read a list of initial lines to insert at the beginning of the document and then read an additional line to append at the end.



Guide Sarath in implementing the functionality to handle these operations using a singly linked list and display the final state of the document.



Company tags: Capgemini

*/

#include <iostream>
using namespace std;

class Node
{
public:
    string data;
    Node *next;
    Node(Node *next1, string data1)
    {
        data = data1;
        next = next1;
    }
};

void insertlist(Node *&head, string data)
{
    Node *temp = new Node(head, data);
    head = temp;
}

void insertattail(Node *&head, Node *&tail, string data)
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
    tail = temp;
}

void print(Node *head)
{
    Node *temp = head;
    while (temp != nullptr)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{
    int size;
    cin >> size;
    Node *head = nullptr;
    Node *tail = nullptr;
    for (int i = 0; i < size; i++)
    {
        string name;
        cin >> name;
        insertlist(head, name);
        if (tail == nullptr)
        {
            tail = head;
        }
    }
    cout << "Document: ";
    print(head);
    string str;
    cin >> str;
    insertattail(head, tail, str);
    cout << "Updated Document: ";
    print(head);

    return 0;
}
