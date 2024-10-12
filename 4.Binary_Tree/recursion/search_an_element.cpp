// searching an element using the linear search through recursion method
#include <iostream>
using namespace std;
bool found(int arr[], int size, int target)
{
    if (size == 0)
    {
        return false;
    }
    if (arr[0] == target)
    {
        return true;
    }
    else
    {
        return found(arr + 1, size - 1, target);
    }
};

int main()
{
    int arr[5] = {1, 5, 3, 6, 8};
    int size = 5;
    int target = 5;
    int ans = found(arr, size, target);
    if (ans)
    {
        cout << "found";
    }
    else
    {
        cout << "not found";
    }
};