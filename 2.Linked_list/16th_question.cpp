/*
Problem Statement



Dhaya is building a playlist manager for your favourite movies using a circular header linked list. Each node in the list represents a movie, and the playlist loops back to the beginning after the last movie.



The playlist manager should allow you to perform operations such as adding movies at the front and end, removing movies from the front and end, and displaying the current playlist.



Company Tags: TCS interview.
*/

#include <iostream>
#include <string>
using namespace std;
class Node
{
public:
    string data;
    Node *next;
    Node(Node *next1, string data1)
    {
        next = next1;
        data = data1;
    };
    ~Node()
    {
        if (this->next != nullptr)
        {
            this->next = nullptr;
            delete next;
        };
    };
};

void insert(Node *&head, string data)
{
    Node *temp = new Node(head, data);
    head = temp;
};

void insertatend(Node *&head, Node *&tail, string data)
{
    Node *temp = new Node(nullptr, data);
    if (head == NULL)
    {
        head = temp;
    }
    else
    {
        tail->next = temp;
    }
    tail = temp;
};

void count(Node *&head)
{
    Node *temp = head;
    int cnt = 0;
    while (temp != NULL)
    {
        cnt++;
        temp = temp->next;
    };
    cout << "No of nodes in the CLL is " << cnt << endl;
};

void deletenode(Node *&head, int position)
{
    if (position == 1)
    {
        Node *temp = head;
        cout << "Deleted element: " << temp->data << endl;
        head = head->next;
        delete temp;
    }
    else
    {
        Node *current = head;
        Node *previous = NULL;
        int cnt = 1;
        while (cnt < position)
        {
            previous = current;
            current = current->next;
            cnt++;
        };
        cout << "Deleted element: " << current->data << endl;
        previous->next = current->next;
    }
};
void print(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << "|" << temp->data << "| --> ";
        temp = temp->next;
    };
    cout << endl;
};

int main()
{
    Node *head = nullptr;
    Node *tail = nullptr;
    int size;
    cin >> size;
    cin.ignore();
    for (int i = 0; i < size; i++)
    {
        string str;
        getline(cin, str);
        insert(head, str);
        if (tail == NULL)
        {
            tail = head;
        };
    };
    int size2;
    cin >> size2;
    cin.ignore();
    for (int i = 0; i < size2; i++)
    {
        string str1;
        getline(cin, str1);
        insertatend(head, tail, str1);
    };
    print(head);
    count(head);
    deletenode(head, 1);
    deletenode(head, (size + size2) - 1);
    print(head);
    count(head);
};