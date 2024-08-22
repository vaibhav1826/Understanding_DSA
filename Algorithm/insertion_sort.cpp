// insertion sort algorithm for sorting an array

/*
Insertion sort is frequently used to arrange small lists. On the other hand, Insertion sort isn't the most efficient method for handling large lists with numerous elements. Notably, the insertion sort algorithm is preferred when working with a linked list.
*/

#include <iostream>
using namespace std;
int main()
{
    int arr[5] = {40, 30, 20, 15, 50};
    int size = 5;
    for (int i = 1; i < size; i++)
    {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}