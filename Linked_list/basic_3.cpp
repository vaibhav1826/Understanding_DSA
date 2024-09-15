// insertion of element in linked list in any position
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

void insertattail(Node *&tail, Node *&head, int data)
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
};

void insert(Node *&head, int data)
{
    Node *temp = new Node(head, data);
    head = temp;
};

void insertatanyposition(Node *&head, Node *&tail, int data, int position)
{
    if (position == 1)
    {
        insert(head, data);
        return;
    };
    Node *temp = head;
    int count = 1;
    while (count < position - 1)
    {
        temp = temp->next;
        count++;
    };
    Node *nextnode = new Node(head, data);
    nextnode->next = temp->next;
    temp->next = nextnode;

    if (temp->next == NULL)
    {
        insertattail(head, tail, data);
    };
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
    int size;
    cout << "enter the size: ";
    cin >> size;
    cout << "enter the linked list: ";
    Node *head = nullptr;
    Node *tail = nullptr;
    for (int i = 0; i < size; i++)
    {
        int a;
        cin >> a;
        insert(head, a);
        if (tail == nullptr)
        {
            tail = head;
        }
    };
    cout << "linked list: ";
    print(head);
    int value;
    cin >> value;
    insertatanyposition(head, tail, value, 6);
    cout << "After insertion: ";
    print(head);
}