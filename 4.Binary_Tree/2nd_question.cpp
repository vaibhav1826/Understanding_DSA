/*
Single File Programming Question
Problem Statement



John is building a binary tree for a project where he needs to append nodes based on user input and display the post-order traversal of the tree. The tree allows inserting integers, and it places nodes in the next available position level-wise. Write a program that continuously appends integers to the binary tree until the user inputs -1 and prints the post-order traversal of the tree.

Input format :
The input consists of space-separated integers, representing the data to be inserted into the binary tree. The input terminates when -1 is entered.

Output format :
The output prints the post-order traversal of the binary tree.



Refer to the sample output for formatting specifications.

Code constraints :
1 ≤ data ≤ 100
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
    };
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
    int *arr = new int[100];
    int cnt = 0;
    for (int i = 0; i < 100; i++)
    {
        int data;
        cin >> data;
        if (data == -1)
        {
            break;
        }
        arr[i] = data;
        cnt++;
    };
    node *root = nullptr;
    root = createtree(arr, root, 0, cnt);
    postorder(root);
};