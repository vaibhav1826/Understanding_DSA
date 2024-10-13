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
        this->left = NULL;
        this->right = NULL;
    }
};

node *buildtree(node *root)
{
    cout << "enter the root: ";
    int data;
    cin >> data;
    root = new node(data);
    if (data == -1)
    {
        return NULL;
    }
    cout << "enter data for insertion in the left of " << data << endl;
    root->left = buildtree(root->left);
    cout << "enter data for insertion in the right of " << data << endl;
    root->right = buildtree(root->right);
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
    node *root = NULL;
    root = buildtree(root);
    inorder(root);
};