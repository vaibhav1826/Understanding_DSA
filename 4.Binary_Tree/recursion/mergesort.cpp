#include <iostream>
using namespace std;

void merge(int *arr, int s, int e)
{
    int mid = (s + e) / 2;
    int l1 = mid - s + 1;
    int l2 = e - mid;

    // Create temp arrays
    int *first = new int[l1];
    int *second = new int[l2];

    // Copy data to temp arrays
    for (int i = 0; i < l1; i++)
    {
        first[i] = arr[s + i];
    }
    for (int i = 0; i < l2; i++)
    {
        second[i] = arr[mid + 1 + i];
    }

    // Merge the temp arrays back into arr[s..e]
    int index1 = 0;         // Initial index of first subarray
    int index2 = 0;         // Initial index of second subarray
    int mainindexarray = s; // Initial index of merged subarray

    while (index1 < l1 && index2 < l2)
    {
        if (first[index1] <= second[index2])
        {
            arr[mainindexarray++] = first[index1++];
        }
        else
        {
            arr[mainindexarray++] = second[index2++];
        }
    }

    // Copy the remaining elements of first[], if any
    while (index1 < l1)
    {
        arr[mainindexarray++] = first[index1++];
    }

    // Copy the remaining elements of second[], if any
    while (index2 < l2)
    {
        arr[mainindexarray++] = second[index2++];
    }

    delete[] first;
    delete[] second;
}

void mergesort(int *arr, int s, int e)
{
    if (s >= e)
    {
        return;
    }
    int mid = (s + e) / 2;
    mergesort(arr, s, mid);
    mergesort(arr, mid + 1, e);
    merge(arr, s, e);
}

int main()
{
    int arr[6] = {12, 54, 1, 3, 86, 42};
    int s = 0;
    int e = 5;
    mergesort(arr, s, e);

    for (int i = s; i <= e; i++)
    { // Print all elements including the last one
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
