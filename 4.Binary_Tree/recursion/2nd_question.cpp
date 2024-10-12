/*
Single File Programming Question
Problem Statement



Maria works as a data analyst at a weather research center. She is responsible for organizing and analyzing daily temperature data collected from various weather stations. To facilitate her analysis, Maria needs to sort the temperature readings in ascending order.



Implement a function to sort a list of daily temperatures recorded by the weather stations using the Quick Sort algorithm. The sorted temperatures will help Maria prepare accurate reports and gain insights from the data.
*/

#include <iostream>
#include <iomanip>
using namespace std;

int partition(float arr[], int start, int end)
{
    double pivot = arr[start];
    int count = 0;
    for (int i = start + 1; i <= end; i++)
    {
        if (arr[i] <= pivot)
        {
            count++;
        }
    }
    int pivot_index = start + count;
    swap(arr[pivot_index], arr[start]);
    int i = start;
    int j = end;
    while (i < pivot_index && pivot_index < j)
    {
        while (arr[i] <= pivot)
        {
            i++;
        }
        while (arr[j] > pivot)
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

void quicksort(float arr[], int start, int end)
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
    float arr[size];
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    quicksort(arr, 0, size - 1);
    for (int i = 0; i < size; i++)
    {
        cout << fixed << setprecision(2) << arr[i] << " ";
    }
};