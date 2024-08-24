/*
Problem Statement



Given an array of integers, implement the bubble sort algorithm that sorts elements at odd positions in descending order and elements at even positions in ascending order. Input consists of an integer n followed by n integers. Output the sorted array. Here, the position starts from 1.

*/

#include <iostream>
using namespace std;
int main()
{
    int size;
    cin >> size;
    int arr[size];
    for (int i = 1; i <= size; i++)
    {
        cin >> arr[i];
    }
    for (int i = 1; i <= size; i += 2)
    {
        for (int j = i + 2; j <= size; j += 2)
        {
            if (arr[j] > arr[i])
            {
                swap(arr[i], arr[j]);
            }
        }
    }
    for (int i = 2; i <= size; i += 2)
    {
        for (int j = i + 2; j <= size; j += 2)
        {
            if (arr[j] < arr[i])
            {
                swap(arr[i], arr[j]);
            }
        }
    }
    for (int i = 1; i <= size; i++)
    {
        cout << arr[i] << " ";
    }
}