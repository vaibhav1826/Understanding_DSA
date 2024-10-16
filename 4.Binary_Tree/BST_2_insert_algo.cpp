/*
Single File Programming Question
Problem Statement



Josh is fascinated by trees, and he has learned about inserting elements into a binary search tree and performing pre-order traversal. He decided to write a program to practice these concepts.



Help Josh write a program that inserts elements into a binary search tree (BST) and performs a pre-order traversal.

Input format :
The first line of input contains an integer t, representing the number of elements Josh wants to insert into the BST.

The second line contains t integer values representing the data to be inserted into the BST, separated by a space.

Output format :
The output displays a single line with space-separated integers representing the pre-order traversal of the BST.



Refer to the sample output for the formatting specifications.

Code constraints :
1 ≤ t ≤ 100

1 <= data <= 1000

Sample test cases :
Input 1 :
5
10 5 15 3 7
Output 1 :
10 5 3 7 15
Input 2 :
7
8 3 10 1 6 14 4
Output 2 :
8 3 1 6 4 10 14
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

node *insert(node *root, int data)
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

node *createtree(int arr[1000], int size)
{
    node *root = nullptr;
    for (int i = 0; i < size; i++)
    {
        root = insert(root, arr[i]);
    }
    return root;
};

void preorder(node *root)
{
    if (root == nullptr)
    {
        return;
    }
    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
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
    root = createtree(arr, size);
    preorder(root);
};