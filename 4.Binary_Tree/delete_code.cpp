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

node *createBST(node *root, int x)
{
    if (root == nullptr)
    {
        return new node(x);
    }
    if (x < root->data)
    {
        root->left = createBST(root->left, x);
    }
    else
    {
        root->right = createBST(root->right, x);
    }
    return root;
};

node *create(int arr[], int size)
{
    node *root = nullptr;
    for (int i = 0; i < size; i++)
    {
        root = createBST(root, arr[i]);
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
}

node *minvalue(node *root)
{
    node *temp = root;
    while (temp->left != nullptr)
    {
        temp = temp->left;
    }
    return temp;
}

node *maxvalue(node *root)
{
    node *temp = root;
    while (temp->right != nullptr)
    {
        temp = temp->right;
    }
    return temp;
};

node *deletevalue(node *root, int value)
{
    if (root == nullptr)
    {
        return NULL;
    }
    if (root->data == value)
    {
        // 0 child
        if (root->left == NULL && root->right == NULL)
        {
            delete root;
            return NULL;
        }
        // 1 child
        if (root->left != NULL && root->right == NULL)
        {
            node *temp = root->left;
            delete root;
            return temp;
        }
        if (root->right != NULL && root->left == NULL)
        {
            node *temp = root->right;
            delete root;
            return temp;
        }
        // 2 child
        if (root->left != NULL && root->right != NULL)
        {
            int mini = minvalue(root->left)->data;
            root->data = mini;
            root->right = deletevalue(root->right, mini);
            return root;
        }
    }
    else if (root->data > value)
    {
        root->left = deletevalue(root->left, value);
        return root;
    }
    else
    {
        root->right = deletevalue(root->right, value);
        return root;
    }
    return root;
}
int main()
{
    int size;
    cout << "enter the size: ";
    cin >> size;
    int *arr = new int[size];
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    node *root = nullptr;
    root = create(arr, size);
    inorder(root);
    cout << endl;
    cout << "min value: " << minvalue(root)->data << endl;
    cout << "max value: " << maxvalue(root)->data << endl;
    cout << "enter the number you want to delete";
    int value;
    cin >> value;
    root = deletevalue(root, value);
    cout << endl;
    inorder(root);
};