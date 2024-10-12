/*
Problem Statement



You're managing a list of product IDs on an e-commerce platform. Each product ID is an integer representing a unique product. You need to search for specific products in the list using two different search methods: linear search and binary search.



Linear Search: This method is used when the list of product IDs is unsorted. You'll traverse the entire list to find the desired product ID.
Binary Search: This method is used when the list of product IDs is sorted in ascending order. You'll repeatedly divide the list in half to locate the desired product ID.
*/

#include <iostream>
using namespace std;

int linearSearch(int arr[], int n, int key)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            count++;
            return i;
        }
    }
    if (count == 0)
    {
        return -1;
    }
}

int binarySearch(int arr[], int n, int key)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            if (arr[j] == key)
            {
                return j;
            }
        }
    }
    if (count == 0)
    {
        return -1;
    }
}

bool isSorted(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            return false;
        }
    }
    return true;
}

int searchArray(int arr[], int n, int key)
{
    if (isSorted(arr, n))
    {
        cout << "Using Binary Search" << endl;
        return binarySearch(arr, n, key);
    }
    else
    {
        cout << "Using Linear Search" << endl;
        return linearSearch(arr, n, key);
    }
}

int main()
{
    int n, key;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cin >> key;

    int result = searchArray(arr, n, key);

    if (result != -1)
    {
        cout << key << " found at index " << result;
    }
    else
    {
        cout << key << " not found in the list";
    }

    return 0;
}