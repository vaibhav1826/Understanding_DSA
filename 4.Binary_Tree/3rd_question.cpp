/*
Single File Programming Question
Problem Statement



In a binary tree where each node contains a single character, you need to build the tree by inserting characters in the order provided. After constructing the tree, perform a post-order traversal to print the characters. Ensure to manage memory properly by freeing the tree after traversal.

Input format :
The first line contains an integer n representing the number of characters to be inserted into the binary tree.

The second line contains n characters where each character is inserted into the tree in the given order.

Output format :
The output should be a single line with characters printed in the post-order traversal of the tree.



Refer to the sample output for the formatting specifications.
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

node *createtree(char arr[], node *root, int i, int size)
{
    if (i < size)
    {
        node *temp = new node(arr[i]);
        root = temp;
        root->left = createtree(arr, root->left, 2 * i + 1, size);
        root->right = createtree(arr, root->right, 2 * i + 2, size);
    }
    return root;
};

void postorder(node *root)
{
    if (root == nullptr)
    {
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout << root->data << " ";
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
    root = createtree(arr, root, 0, size);
    postorder(root);
};