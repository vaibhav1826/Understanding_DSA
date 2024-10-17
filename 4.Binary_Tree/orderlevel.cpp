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

node *binarytree(int arr[], node *root, int i, int s)
{
    if (i < s)
    {
        node *temp = new node(arr[i]);
        root = temp;
        root->left = binarytree(arr, root->left, 2 * i + 1, s);
        root->right = binarytree(arr, root->right, 2 * i + 2, s);
    }
    return root;
};

void levelordertraversal(node *root)
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
    }
};

int main()
{
    int size;
    cout << "enter the size : ";
    cin >> size;
    int *arr = new int[size];
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    node *root = NULL;
    root = binarytree(arr, root, 0, size);
    levelordertraversal(root);
};