// bubble sort algorithm for sorting an array
/*

Bubble sort is a simple sorting algorithm used to rearrange a set of elements in ascending or descending order. It's useful for smaller sets of elements but is inefficient for larger sets.

*/

#include <iostream>
using namespace std;
int main()
{
    int arr[5] = {40, 30, 20, 15, 50};
    int size = 5;
    for (int i = 0; i < size; i++)
    {
        for (int j = i; j < size; j++)
        {
            if (arr[i] > arr[j])
            {
                swap(arr[i], arr[j]);
            }
        }
    }
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}