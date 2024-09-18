/*
Problem Statement



Dharun is working on a program to manipulate linked lists. He wants to write a function that takes two linked lists as input, inserts nodes at the end, and deletes all the nodes from the first list that also appear in the second list.



Dharun needs your help implementing this function. The function should take two linked lists, list1, and list2, as input, where each list is represented by its head node.
*/

#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node(int data1)
    {
        data = data1;
        next = nullptr;
    }
    ~Node()
    {
        next = nullptr;
    }
};

// Function to insert a node at the end of the linked list
void insertAtEnd(Node *&head, int data)
{
    Node *newNode = new Node(data);
    if (head == nullptr)
    {
        head = newNode;
        return;
    }
    Node *temp = head;
    while (temp->next != nullptr)
    {
        temp = temp->next;
    }
    temp->next = newNode;
}

// Function to delete nodes from list1 that appear in list2
void deleteCommonNodes(Node *&list1, Node *list2)
{
    Node *dummy = new Node(0);
    dummy->next = list1;
    Node *prev = dummy;
    Node *curr = list1;

    while (curr != nullptr)
    {
        Node *temp = list2;
        bool found = false;
        while (temp != nullptr)
        {
            if (curr->data == temp->data)
            {
                found = true;
                break;
            }
            temp = temp->next;
        }
        if (found)
        {
            prev->next = curr->next;
            delete curr;
            curr = prev->next;
        }
        else
        {
            prev = curr;
            curr = curr->next;
        }
    }
    list1 = dummy->next;
    delete dummy;
}

// Function to count and print the number of nodes in the linked list
void count(Node *head)
{
    int count = 0;
    Node *temp = head;
    while (temp != nullptr)
    {
        count++;
        temp = temp->next;
    }
    if (count == 0)
    {
        cout << "Elements in both lists are same" << endl;
    };
}

// Function to print the linked list
void printList(Node *head)
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
    Node *list1 = nullptr;
    Node *list2 = nullptr;

    int size1, size2, data;
    cin >> size1;
    for (int i = 0; i < size1; i++)
    {
        cin >> data;
        insertAtEnd(list1, data);
    }
    cin >> size2;
    for (int i = 0; i < size2; i++)
    {
        cin >> data;
        insertAtEnd(list2, data);
    }

    cout << "Before deletion: ";
    printList(list1);
    deleteCommonNodes(list1, list2);

    cout << "After deletion: ";
    printList(list1);
    count(list1);

    return 0;
}
