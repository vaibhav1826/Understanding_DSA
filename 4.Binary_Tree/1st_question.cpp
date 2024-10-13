/*
Single File Programming Question
Problem Statement



Divu wants a program to analyze a binary tree by traversing it in two different ways. The program begins by prompting for an integer n, indicating the number of nodes in the binary tree. Divu then provides n integers representing the values of these nodes. The program constructs the binary tree from the provided values and performs two types of traversals:



Forward In-order Traversal: It traverses the binary tree in order, printing each node's value as it visits.

Reverse In-order Traversal: It traverses the binary tree in order but prints each node's value in reverse order.



After conducting these traversals, the program prints the results.
*/

// You are using GCC
#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *left;
    Node *right;

    Node(int v) : data(v), left(nullptr), right(nullptr) {}
};

void printInorder(Node *node)
{
    if (node == NULL)
    {
        return;
    }
    printInorder(node->left);
    cout << node->data << " ";
    printInorder(node->right);
}

void printInorderReverse(Node *node)
{
    if (node == NULL)
    {
        return;
    }
    printInorderReverse(node->right);
    cout << node->data << " ";
    printInorderReverse(node->left);
}

Node *insertLevelOrder(int arr[], Node *root, int i, int n)
{
    if (i < n)
    {
        Node *temp = new Node(arr[i]);
        root = temp;
        root->left = insertLevelOrder(arr, root->left, 2 * i + 1, n);
        root->right = insertLevelOrder(arr, root->right, 2 * i + 2, n);
    }
    return root;
}

int main()
{
    int n;
    cin >> n;

    int *arr = new int[n];
    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }

    Node *root = nullptr;
    root = insertLevelOrder(arr, root, 0, n);

    printInorder(root);
    cout << endl;
    printInorderReverse(root);

    delete[] arr;

    return 0;
}