#include <iostream>
using namespace std;

bool binarysearch(int arr[], int start, int end, int target)
{
    if (start > end)
    {
        return false;
    }
    int mid = start + (end - start) / 2;
    if (arr[mid] == target)
    {
        return true;
    }
    if (arr[mid] > target)
    {
        return binarysearch(arr, start, mid - 1, target);
    }
    else
    {
        return binarysearch(arr, mid + 1, end, target);
    }
}

int main()
{
    int arr[6] = {2, 4, 6, 7, 8, 9};
    int start = 0;
    int end = 5;
    int target = 8;
    bool ans = binarysearch(arr, start, end, target);
    if (ans)
    {
        cout << "Found" << endl;
    }
    else
    {
        cout << "Not found" << endl;
    }
    return 0;
}
