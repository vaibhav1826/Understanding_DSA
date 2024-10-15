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
    }
};

// Insert function to maintain BST properties
node *insertBST(node *root, int data)
{
    if (root == nullptr)
    {
        return new node(data);
    }
    if (data < root->data)
    {
        root->left = insertBST(root->left, data);
    }
    else
    {
        root->right = insertBST(root->right, data);
    }
    return root;
}

// Create BST from array
node *createBST(int arr[], int n)
{
    node *root = nullptr;
    for (int i = 0; i < n; i++)
    {
        root = insertBST(root, arr[i]);
    }
    return root;
}

// In-order traversal
void inorder(node *root)
{
    if (root == nullptr)
    {
        return;
    }
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

int main()
{
    int n;
    cin >> n;
    int *arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    node *root = createBST(arr, n);
    inorder(root);
    cout << endl;
    delete[] arr; // Free dynamically allocated memory
    return 0;
}
