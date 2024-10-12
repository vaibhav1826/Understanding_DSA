// function for checking whether an array is sorted or not using recursion
#include <iostream>
using namespace std;
bool issorted(int arr[], int size)
{
    if (size == 0 || size == 1)
    {
        return true;
    }
    if (arr[0] > arr[1])
    {
        return false;
    }
    else
    {
        return issorted(arr + 1, size - 1);
    }
};

int main()
{
    int size = 5;
    int arr[5] = {2, 5, 6, 7, 9};
    if (issorted(arr, size))
    {
        cout << "its sorted array" << endl;
    }
    else
    {
        cout << "its not an sorted array" << endl;
    }
};