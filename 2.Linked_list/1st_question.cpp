/*

Alice is preparing for a coding competition and wants to practice her skills with linked lists. She decides to write a program that allows her to create a linked list by inserting elements at the front.



Help Alice with her task.



Company tags: HCL

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
};

void insertlist(Node *&head, int data)
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
    int n;
    cin >> n;
    Node *head = nullptr;
    for (int i = 0; i < n; i++)
    {
        int b;
        cin >> b;
        insertlist(head, b);
    };
    cout << "Created Linked list: ";
    print(head);
    int a;
    cin >> a;
    insertlist(head, a);
    cout << "Final List: ";
    print(head);
};
