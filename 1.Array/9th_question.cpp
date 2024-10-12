/*
Problem Statement



Liam needs to find the index of a target number of gold coins in a sorted list. Implement a binary search function for Liam to efficiently locate and return the index if found; otherwise, return -1 indicating the target isn't present in the list.
*/

#include <iostream>
using namespace std;
int main()
{
    int size;
    cin >> size;
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    int target;
    cin >> target;
    int count = 0;
    for (int i = 0; i < size; i++)
    {
        for (int j = i; j < size; j++)
        {
            if (arr[i] == target)
            {
                cout << "Target found at index: " << i;
                count++;
                break;
            }
        }
    }
    if (count == 0)
    {
        cout << "-1";
    }
}