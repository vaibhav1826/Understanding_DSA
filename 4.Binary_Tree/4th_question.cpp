/*
Problem Statement



Athulya needs a program that constructs a binary tree from a given array of integers and prints its in-order traversal. The program should take an integer n as input, followed by n integers representing the elements of the array.



Then, it constructs a binary tree using the array elements in level order and prints the in-order traversal of the constructed binary tree.

Input format :
The first line consists of an integer n, representing the number of elements in the array.

The second line consists of n space-separated integers representing the elements of the array.

Output format :
The output prints a single line containing the inorder traversal of the constructed binary tree in the format "Inorder traversal: <inorder sequence>".



Refer to the sample output for the formatting specifications.

Code constraints :
The input integers should be unique.

1 ≤ n ≤ 15

1 ≤ array elements ≤ 150
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

node *createtree(int arr[], node *root, int i, int n)
{
    if (i < n)
    {
        node *temp = new node(arr[i]);
        root = temp;
        root->left = createtree(arr, root->left, 2 * i + 1, n);
        root->right = createtree(arr, root->right, 2 * i + 2, n);
    }
    return root;
};

void inorder(node *root)
{
    if (root == nullptr)
    {
        return;
    }
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
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
    root = createtree(arr, root, 0, size);
    cout << "Inorder traversal: ";
    inorder(root);
}