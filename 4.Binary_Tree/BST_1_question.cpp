/*
Single File Programming Question
Problem Statement



You are provided with a collection of lowercase letters. Your objective is to create a Binary Search Tree (BST) from these letters.



Once the BST is constructed, perform an in-order traversal of the tree to display the characters in ascending alphabetical order.

Input format :
The first line of input consists of a positive integer N, representing the number of letters.

The second line consists of N characters, representing the letters to be inserted into the tree.

Output format :
The output prints the in-order traversal of the given characters.

Code constraints :
1 ≤ N ≤ 26

The input characters will be in lowercase.
*/

#include <iostream>
using namespace std;
class node
{
public:
    char data;
    node *left;
    node *right;
    node(char data)
    {
        this->data = data;
        this->left = nullptr;
        this->right = nullptr;
    };
};
node *insert(node *root, char data)
{
    if (root == nullptr)
    {
        return new node(data);
    }
    if (data < root->data)
    {
        root->left = insert(root->left, data);
    }
    else
    {
        root->right = insert(root->right, data);
    }
    return root;
};
node *create(char arr[], int n)
{
    node *root = nullptr;
    for (int i = 0; i < n; i++)
    {
        root = insert(root, arr[i]);
    };
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
    char *arr = new char[size];
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    node *root = nullptr;
    root = create(arr, size);
    inorder(root);
};