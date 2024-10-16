/*
Single File Programming Question
Problem Statement



Ragul wants to build a binary search tree (BST) and perform a key search operation on it. He needs your help to accomplish this. Write a program that helps Ragul create a BST and search for a specific key within it.



Company Tags: Wipro

Input format :
The first line of input consists of the number of nodes n.

The second line of input consists of n unique values for nodes, separated by a space.

The third line of input consists of the key to be searched.

Output format :
The output displays one of the following messages based on whether the key is found in the binary search tree or not in the following format:



If the key is found in the binary search tree, print "The key <<key value>> is found in the binary search tree"
If the key is not found in the binary search tree, print "The key <<key value>> is not found in the binary search tree"


Refer to the sample output for the exact format.

Code constraints :
1 ≤ n ≤ 10

Each node value is a unique integer.

1 <= key <= 1000

Sample test cases :
Input 1 :
7
101 102 103 105 106 108 110
102
Output 1 :
The key 102 is found in the binary search tree
Input 2 :
7
101 102 103 105 106 108 110
115
Output 2 :
The key 115 is not found in
*/

#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *left;
    node *right;
    node(int data)
    {
        this->data = data;
        this->left = nullptr;
        this->right = nullptr;
    };
};

bool Binarysearch(node *root, int i)
{
    node *temp = root;
    while (temp != nullptr)
    {
        if (temp->data == i)
        {
            return true;
        }
        if (temp->data > i)
        {
            temp = temp->left;
        }
        else
        {
            temp = temp->right;
        }
    }
    return false;
};

node *BST(node *root, int data)
{
    if (root == nullptr)
    {
        return new node(data);
    }
    if (data < root->data)
    {
        root->left = BST(root->left, data);
    }
    else
    {
        root->right = BST(root->right, data);
    }
    return root;
};

node *create(int arr[10], int size)
{
    node *root = nullptr;
    for (int i = 0; i < size; i++)
    {
        root = BST(root, arr[i]);
    };
    return root;
};

int main()
{
    int size;
    cin >> size;
    int *arr = new int[size];
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    node *root = nullptr;
    root = create(arr, size);
    int a;
    cin >> a;
    if (Binarysearch(root, a))
    {
        cout << "The key " << a << " is found in the binary search tree";
    }
    else
    {
        cout << "The key " << a << " is not found in the binary search tree";
    }
}