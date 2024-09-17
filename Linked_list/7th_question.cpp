/*
Problem Statement



Daniel has a singly linked list and wants to delete the middle node from the list. If there are two middle nodes (in the case of an even number of nodes), the second one should be considered the middle node and deleted. Otherwise, the single middle node is deleted. Write a program to help Daniel delete this middle node.



For example, if the given linked list is 1->2->3->4->5 then the linked list should be modified to 1->2->4->5.

For example, if the given linked list is 1->2->3->4->5->6, then it should be modified to 1->2->3->5->6.



Company Tags: CTS


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
    ~Node()
    {
        if (this->next != NULL)
        {
            this->next = NULL;
            delete next;
        }
    };
};
void deletenode(Node *&head, int size)
{
    int cnt = 1;
    Node *current = head;
    Node *previous = NULL;
    while (cnt < size)
    {
        previous = current;
        current = current->next;
        cnt++;
    };
    previous->next = current->next;
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
    }
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
    cout << "Original Linked List: ";
    print(head);
    int pos = 0;
    pos = size / 2 + 1;
    deletenode(head, pos);
    cout << "Updated Linked List: ";
    print(head);
};