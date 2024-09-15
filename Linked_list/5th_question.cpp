/*
Problem Statement



A company wants to analyze the performance of its sales team by reviewing the sales figures from the most recent months. Each month's sales data is entered into a singly linked list, with each node representing a month's sales.



Write a program that computes the sum of sales for the last m months from this linked list data.
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

void insert(Node *&head, int data)
{
    Node *temp = new Node(head, data);
    head = temp;
};

void print(Node *&head, int size)
{
    Node *temp = head;
    int count = 0;
    int sum = 0;
    while (count < size)
    {
        sum = sum + temp->data;
        temp = temp->next;
        count++;
    }
    cout << sum;
};

int main()
{
    int size;
    cin >> size;
    Node *head = nullptr;
    for (int i = 0; i < size; i++)
    {
        int a;
        cin >> a;
        insert(head, a);
    };
    int c;
    cin >> c;
    print(head, c);
};