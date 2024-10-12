#include <iostream>
using namespace std;

int partition(int arr[], int start, int end)
{
    int pivet = arr[start];
    int count = 0;
    for (int i = start + 1; i <= end; i++)
    {
        if (arr[i] <= pivet)
        {
            count++;
        }
    }
    int pivet_index = start + count;
    swap(arr[start], arr[pivet_index]);
    int i = start;
    int j = end;
    while (i < pivet_index && pivet_index < j)
    {
        while (arr[i] <= pivet_index)
        {
            i++;
        }
        while (arr[j] > pivet_index)
        {
            j--;
        }
        if (i < pivet_index && pivet_index < j)
        {
            swap(arr[i++], arr[j--]);
        }
    }
    return pivet_index;
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
    int arr[5] = {4, 2, 3, 1, 8};
    int end = 5;
    quicksort(arr, 0, end - 1);
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
};