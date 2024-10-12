/*
Problem Statement



You're managing the inventory levels of different items in a warehouse. The inventory levels are stored in an array of integers, where each integer represents the quantity of a specific item.



You will perform the following operations:

1.	Traversal: Go through the list of inventory quantities to verify the stock levels.

2.	Insertion: Add a new item to the inventory, updating the quantity.

3.	Deletion: Remove an item from the inventory when it is out of stock.
*/

// You are using GCC
#include <iostream>
using namespace std;

#define MAX_SIZE 100

void traverseInventory(int inventory[], int size)
{
    cout << "Inventory List: ";
    for (int i = 0; i < size; i++)
    {
        cout << inventory[i] << " ";
    }
    cout << endl;
}

void insertItem(int inventory[], int &size, int item)
{
    cout << "Inserting Item: " << item << endl;
    inventory[size] = item;
    size++;
    cout << "Inventory List: ";
    for (int i = 0; i < size; i++)
    {
        cout << inventory[i] << " ";
    }
    cout << endl;
}

void removeItem(int inventory[], int &size, int item)
{
    cout << "Removing Item: " << item << endl;
    int k = 0;
    cout << "Inventory List: ";
    for (int i = 0; i < size; i++)
    {
        if (inventory[i] == item)
        {
            k = i;
        }
    }
    for (int i = k; i < size; i++)
    {
        inventory[i] = inventory[i + 1];
    }
    size--;

    for (int i = 0; i < size; i++)
    {
        cout << inventory[i] << " ";
    }
    cout << endl;
}

int main()
{
    int inventory[MAX_SIZE];
    int size, n, m;
    int newItems[MAX_SIZE];
    int deleteItems[MAX_SIZE];

    cin >> size;

    for (int i = 0; i < size; i++)
    {
        cin >> inventory[i];
    }

    traverseInventory(inventory, size);

    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> newItems[i];
    }

    for (int i = 0; i < n; i++)
    {
        insertItem(inventory, size, newItems[i]);
    }

    cin >> m;
    for (int i = 0; i < m; i++)
    {
        cin >> deleteItems[i];
    }
    for (int i = 0; i < m; i++)
    {
        removeItem(inventory, size, deleteItems[i]);
    }

    return 0;
}