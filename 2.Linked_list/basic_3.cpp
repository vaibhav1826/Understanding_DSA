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
// function for inserting the node at the end
void insertattail(Node *&head, Node *&tail, int data)
{
    Node *temp = new Node(nullptr, data);
    if (tail == nullptr)
    {
        head = temp;
    }
    else
    {
        tail->next = temp;
    }
    tail = temp;
};
// function for inserting at the head
void insert(Node *&head, int data)
{
    Node *temp = new Node(head, data);
    head = temp;
};
// function for inserting at any position
void insertatmiddle(Node *&head, Node *&tail, int data, int position)
{
    Node *temp = head;
    // for inserting at the head of node
    if (position == 1)
    {
        insert(head, data);
        return;
    }
    // for inserting at the middle of any node
    int count = 1;
    while (count < position - 1)
    {
        temp = temp->next;
        count++;
    };
    Node *newnode = new Node(head, data);
    newnode->next = temp->next;
    temp->next = newnode;
    // for inserting at the end of the node
    if (temp == nullptr)
    {
        insertattail(head, tail, data);
    }
};
// function for printing the the linked list node
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

// driver code
int main()
{
    Node *head = nullptr;
    Node *tail = nullptr;
    int size;
    cout << "Enter the size of the linked list: ";
    cin >> size;
    cout << "enter the linked list: ";
    for (int i = 0; i < size; i++)
    {
        int a;
        cin >> a;
        insert(head, a);
        if (tail == nullptr)
        {
            tail = head;
        };
    };
    cout << "the linked list are: ";
    print(head);
    int value;
    cout << "enter the value : ";
    cin >> value;
    int position;
    cout << "enter at which position you want: ";
    cin >> position;
    insertatmiddle(head, tail, value, position);
    print(head);
};
