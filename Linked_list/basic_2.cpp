// basic program to insert at the tail in linked list

#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int data)
    {
        this->data = data;
        this->next = next;
    }
};

void insertattail(Node *&tail, int d)
{
    // creating new node
    Node *temp = new Node(d);
    tail->next = temp;
    tail = temp;
};

void print(Node *&head)
{

    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
};

int main()
{
    Node *node1 = new Node(10);
    // head pointing toward the node 1
    Node *head = node1;
    // tail pointing toward the node1
    Node *tail = node1;

    insertattail(tail, 11);
    print(head);
    cout << endl;
    insertattail(tail, 12);
    print(head);
}
