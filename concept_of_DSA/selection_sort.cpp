// selection sort algorithm for sorting an array
/*
Selection sort works by taking the smallest element in an unsorted array and bringing it to the front.

 In the selection sort, the cost of swapping is irrelevant, and all elements must be checked. The cost of writing to memory matters in selection sort, just as it does in flash memory

*/

#include <iostream>
using namespace std;
int main()
{
    int arr[5] = {40, 30, 20, 15, 50};
    int size = 5;
    for (int i = 0; i < size - 1; i++)
    {
        int min = i;
        for (int j = i + 1; j < size; j++)
        {
            if (arr[j] < arr[min])
            {
                min = j;
            }
        }
        if (arr[min] != arr[i])
        {
            swap(arr[min], arr[i]);
        }
    }
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}