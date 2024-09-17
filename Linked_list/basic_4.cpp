// linked list to remove an element from the linked list

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
        };
    };
};
void deletenode(Node *&head, int position)
{
    // removing from the first character
    if (position == 1)
    {
        Node *temp = head;
        head = head->next;
        delete temp;
    }
    else
    {
        int cnt = 1;
        Node *current = head;
        Node *previous = NULL;
        while (cnt < position)
        {
            previous = current;
            current = current->next;
            cnt++;
        }
        previous->next = current->next;
    };
};
// function for inserting at the head
void insert(Node *&head, int data)
{
    Node *temp = new Node(head, data);
    head = temp;
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
    int size;
    cout << "Enter the size of the linked list: ";
    cin >> size;
    cout << "enter the linked list: ";
    for (int i = 0; i < size; i++)
    {
        int a;
        cin >> a;
        insert(head, a);
    };
    cout << "the linked list are: ";
    print(head);
    int position;
    cout << "enter at which position you want TO delete: ";
    cin >> position;
    deletenode(head, position);
    print(head);
};
