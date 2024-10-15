/*
Single File Programming Question
Problem Statement



A company is designing an organizational structure to manage employees hierarchically. Each employee is represented as a node in a binary tree, where each node (positive integer) contains the employee's ID. The organization uses a level-order approach to insert employees into the tree. Each new employee is added to the next available position in the current level of the binary tree.



The system needs to:



Insert new employee's ID positive integers into the organizational structure following a level-order traversal.
Print out the IDs of employees in the organization using an in-order traversal.


Example



Input

1 2 3 0

Output

2 1 3

Explanation

1 is the root of the Binary tree. 2 is the left child of 1, and 3 is the right child of 1. Hence the in-order traversal is 2 1 3, which follows the rule Left Root Right.

Input format :
The input consists of a sequence of positive integers, where each integer represents an employee ID.

The sequence ends with a non-positive integer (e.g., 0 or -1), which indicates the end of input.

Output format :
The output displays the sequence of integers representing the employee IDs in the in-order traversal of the binary tree.



Refer to the sample output for the formatting specifications.

Code constraints :
1 <= employee ID <= 100

Sample test cases :
Input 1 :
1 2 3 0
Output 1 :
2 1 3
Input 2 :
1 2 3 4 5 6 7 -8
Output 2 :
4 2 5 1 6 3 7
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

void inorder(node *root)
{
    if (root == NULL)
    {
        return;
    }
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
};

int main()
{
    int i = 0, cnt = 0;
    int *arr = new int[100];
    while (i < 1)
    {
        int value;
        cin >> value;
        if (value <= 0)
        {
            break;
        }
        arr[cnt] = value;
        cnt++;
    };
    node *root = nullptr;
    root = createtree(arr, root, 0, cnt);
    inorder(root);
};