#include <iostream>
#include <queue>
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
    };
};
node *BST(node *root, int x)
{
    if (root == NULL)
    {
        return new node(x);
    }
    if (root->data > x)
    {
        root->left = BST(root->left, x);
    }
    else
    {
        root->right = BST(root->right, x);
    }
    return root;
};

node *create(int arr[], int e)
{
    node *root = NULL;
    for (int i = 0; i < e; i++)
    {
        root = BST(root, arr[i]);
    }
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

void preorder(node *root)
{
    if (root == NULL)
    {
        return;
    }
    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
};

void postorder(node *root)
{
    if (root == NULL)
    {
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout << root->data << " ";
};

void levelorder(node *root)
{
    if (root == nullptr)
    {
        return;
    }
    queue<node *> q;
    q.push(root);
    while (!q.empty())
    {
        node *temp = q.front();
        q.pop();
        cout << temp->data << " ";
        if (temp->left != NULL)
        {
            q.push(temp->left);
        }
        if (temp->right != NULL)
        {
            q.push(temp->right);
        }
    };
};
node *minval(node *root)
{
    node *temp = root;
    while (temp->left != NULL)
    {
        temp = temp->left;
    }
    return temp;
};

node *maxval(node *root)
{
    node *temp = root;
    while (temp->right != NULL)
    {
        temp = temp->right;
    }
    return temp;
};

node *deletenode(node *root, int value)
{
    if (root == NULL)
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
            int mini = minval(root->left)->data;
            root->data = mini;
            root->right = deletenode(root->right, mini);
            delete root;
        }
    }
    else if (root->data > value)
    {
        root->left = deletenode(root->left, value);
        return root;
    }
    else
    {
        root->right = deletenode(root->right, value);
        return root;
    }
    return root;
};

int main()
{
    int size;
    cout << "enter the size of array: ";
    cin >> size;
    int *arr = new int[size];
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    node *root = NULL;
    root = create(arr, size);
    cout << endl
         << "inorder : ";
    inorder(root);
    cout << endl
         << "preorder : ";
    preorder(root);
    cout << endl
         << "postorder : ";
    postorder(root);
    cout << endl
         << "levelorder : ";
    levelorder(root);
    cout << endl
         << "Minimum value : " << minval(root)->data;
    cout << endl
         << "Maximum value : " << maxval(root)->data;
    cout << endl
         << "enter the data you want to delete : ";
    int value;
    cin >> value;
    deletenode(root, value);
    cout << endl
         << "inorder after deletion: ";
    inorder(root);
};