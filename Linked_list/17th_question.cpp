/*
Problem Statement



Milton is working on a project that involves managing data using a circular header-linked list. The circular header linked list is a special type of linked list where the last node points back to the head node. Each node in the list contains a value and a pointer to the next node.



Milton needs to implement a program that checks if the circular header linked list is sorted in non-decreasing order.
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
void issorted(Node *&head, int size)
{
    int arr[size];
    int arr1[size];
    int i = 0;
    Node *temp = head;
    while (temp != nullptr)
    {
        arr[i] = temp->data;
        temp = temp->next;
        i++;
    };
    for (int i = 0; i < size; i++)
    {
        arr1[i] = arr[i];
    };
    for (int i = 0; i < size; i++)
    {
        for (int j = i; j < size; j++)
        {
            if (arr1[i] > arr1[j])
            {
                swap(arr1[i], arr1[j]);
            }
        }
    };
    int cnt = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] != arr1[i])
        {
            cnt++;
            break;
        }
    }
    if (cnt == 0)
    {
        cout << "The list is sorted in non-decreasing order";
    }
    else
    {
        cout << "The list is not sorted in non-decreasing order";
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
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    };
    for (int i = size - 1; i >= 0; i--)
    {
        insert(head, arr[i]);
    };
    issorted(head, size);
}