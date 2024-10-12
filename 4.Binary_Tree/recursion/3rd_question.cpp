/*
Problem Statement



Diego is organizing a digital library and wants to categorize books based on the years they were published. He has a list of publication years stored as integers, which he needs to sort in ascending order to make it easier to find books from a specific year. Diego uses a custom quicksort algorithm to sort these publication years efficiently.



Help Diego by writing a program that reads a list of publication years and sorts them in ascending order using the quicksort algorithm.
*/

#include <iostream>
using namespace std;

int partition(int arr[], int start, int end)
{
    int pivot = arr[start];
    int count = 0;
    for (int i = start + 1; i <= end; i++)
    {
        if (arr[i] <= pivot)
        {
            count++;
        }
    }
    int pivot_index = start + count;
    swap(arr[start], arr[pivot_index]);
    int i = start;
    int j = end;
    while (i < pivot_index && pivot_index < j)
    {
        while (arr[i] <= pivot)
        {
            i++;
        }
        while (pivot < arr[j])
        {
            j--;
        }
        if (i < pivot_index && pivot_index < j)
        {
            swap(arr[i++], arr[j--]);
        }
    }
    return pivot_index;
};
void quicksort(int arr[], int start, int end)
{
    if (start >= end)
    {
        return;
    }
    int p = partition(arr, start, end);
    quicksort(arr, start, p - 1);
    quicksort(arr, p + 1, end);
};

int main()
{
    int size;
    cin >> size;
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    quicksort(arr, 0, size - 1);
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
};