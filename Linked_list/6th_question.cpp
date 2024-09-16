/*
Problem Statement



Aaron is building a text editor feature to check if a user-entered word is a palindrome using a singly linked list. Each character of the word is stored as a node in the linked list. Write a program for him to construct the linked list from user input and determine if the word is a palindrome.



Company Tags: Amazon, Microsoft, Snapdeal
*/

#include <iostream>
using namespace std;
class Node
{
public:
    char data;
    Node *next;
    Node(Node *next1, char data1)
    {
        next = next1;
        data = data1;
    };
};
void palindrome(Node *&head, int value)
{
    char arr[value];
    char arr1[value];
    int j = 0;
    Node *temp = head;
    while (temp != NULL)
    {
        arr[j] = temp->data;
        temp = temp->next;
        j++;
    };
    int s = 0;
    for (int i = value - 1; i >= 0; i--)
    {
        arr1[s] = arr[i];
        s++;
    };
    int count = 0;
    for (int k = 0; k < value; k++)
    {
        if (arr[k] != arr1[k])
        {
            count = 1;
            break;
        }
    };
    if (count == 1)
    {
        cout << "The linked list is not a palindrome";
    }
    else
    {
        cout << "The Linked list is a palindrome";
    }
};

void insertathead(Node *&head, char data)
{
    Node *temp = new Node(head, data);
    head = temp;
};

int main()
{
    Node *head = nullptr;
    int count = 0;
    int i = 1;
    while (i > 0)
    {
        char a;
        cin >> a;
        if (a == '$')
        {
            break;
        }
        else
        {
            insertathead(head, a);
        }
        count++;
    };
    palindrome(head, count);
};
