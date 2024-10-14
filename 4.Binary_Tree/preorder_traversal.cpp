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
    int n;
    cin >> n;
    int *arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    node *root = nullptr;
    root = createtree(arr, root, 0, n);
    preorder(root);
};