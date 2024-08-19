#include <iostream>
using namespace std;
int main()
{
    int size1;
    cin >> size1;
    int arr1[size1];
    for (int i = 0; i < size1; i++)
    {
        cin >> arr1[i];
    }
    int size2;
    cin >> size2;
    int arr2[size2];
    for (int i = 0; i < size2; i++)
    {
        cin >> arr2[i];
    }
    if (size1 > size2)
    {
        int mergearray[size1];
        for (int i = 0; i < size2; i++)
        {
            mergearray[i] = arr1[i] + arr2[i];
        }
        for (int i = size2; i < size1; i++)
        {
            mergearray[i] = arr1[i];
        }
        for (int i = size1 - 1; i >= 0; i--)
        {
            cout << mergearray[i] << " ";
        }
    }
    else
    {
        int mergearray[size2];
        for (int i = 0; i < size1; i++)
        {
            mergearray[i] = arr1[i] + arr2[i];
        }
        for (int i = size1; i < size2; i++)
        {
            mergearray[i] = arr2[i];
        }
        for (int i = size2 - 1; i >= 0; i--)
        {
            cout << mergearray[i] << " ";
        }
    }
}
