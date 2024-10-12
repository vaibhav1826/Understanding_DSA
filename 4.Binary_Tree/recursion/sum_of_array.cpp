// sum of the array using the recursion method
#include <iostream>
using namespace std;

// function using the recursion
int sum(int arr[], int size)
{
    int ans = arr[0];
    if (size == 0)
    {
        return ans;
    }
    ans = ans + sum(arr + 1, size - 1);
    return ans;
};

// main code
int main()
{
    int arr[5] = {1, 5, 4, 2, 3};
    int size = 5;
    int value = sum(arr, size);
    cout << value << endl;
};