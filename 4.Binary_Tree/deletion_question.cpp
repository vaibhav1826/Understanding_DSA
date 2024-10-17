/*
Single File Programming Question
Problem Statement



Preethi is fascinated by trees, especially binary search trees. She wants to create a binary search tree (BST) of characters and perform deletion operations on it. She wants you to help her write a program.



Preethi needs a program that allows her to:

Create a binary search tree by inserting a series of characters.
Delete a specific character from the binary search tree.
Print the characters in the BST in an in-order traversal.


Note

Each character inserted into the binary search tree is a number, special character, lowercase letter, or uppercase letter. The characters are inserted based on their respective ASCII value.
All inserted characters into the binary search tree will be unique.
Input format :
The first line of input consists of the number of characters N.

The second line of input consists of N unique characters separated by a space.

The third line of input consists of the character M to be deleted.

Output format :
The output displays the in-order traversal of the given inputs after deleting the character M.



Refer to the sample output for formatting specifications.

Code constraints :
1 ≤ N ≤ 50

Sample test cases :
Input 1 :
5
Z E W T Y
Y
Output 1 :
E T W Z
Input 2 :
7
A 2 B b # c D
#
Output 2 :
2 A B D b c
Input 3 :
5
t 4 % u K
u
Output 3 :
% 4 K t
*/

// You are using GCC
#include <iostream>
using namespace std;
struct Node
{
    char data;
    Node *left;
    Node *right;
};

Node *insert(Node *root, char data)
{
    if (root == NULL)
    {
        root = new Node();
        root->data = data;
        root->left = root->right = NULL;
    }
    else if (data <= root->data)
    {
        root->left = insert(root->left, data);
    }
    else
    {
        root->right = insert(root->right, data);
    }
    return root;
}

Node *findMin(Node *root)
{
    while (root->left != NULL)
    {
        root = root->left;
    }
    return root;
}

Node *deleteNode(Node *root, char data)
{
    if (root == NULL)
    {
        return NULL;
    }
    if (root->data == data)
    {
        if (root->left == NULL && root->right == NULL)
        {
            delete root;
            return NULL;
        }
        if (root->left != NULL && root->right == NULL)
        {
            Node *temp = root->left;
            delete root;
            return temp;
        }
        if (root->right != NULL && root->left == NULL)
        {
            Node *temp = root->right;
            delete root;
            return temp;
        }
        if (root->right != NULL && root->left != NULL)
        {
            Node *temp = findMin(root->right);
            root->data = temp->data;
            root->right = deleteNode(root->right, temp->data);
            return root;
        }
    }
    else if (root->data > data)
    {
        root->left = deleteNode(root->left, data);
        return root;
    }
    else
    {
        root->right = deleteNode(root->right, data);
        return root;
    }
    return root;
}

void inorder(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

int main()
{
    int size;
    cin >> size;
    Node *root = NULL;
    char input, char_to_delete;
    while (size != 0)
    {
        cin >> input;
        root = insert(root, input);
        size--;
    }
    cin >> char_to_delete;
    root = deleteNode(root, char_to_delete);
    inorder(root);
    cout << endl;
    return 0;
}