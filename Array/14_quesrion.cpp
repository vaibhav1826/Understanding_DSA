/*
Problem Statement



You are working on a ticketing system for a popular event. As part of the system, you need to implement a feature that finds the kth smallest ticket price among all the available tickets.



Write a program that takes user input for the number of tickets and their respective prices. The program should use the selection sort algorithm to sort the ticket prices in non-decreasing order. After sorting, it should display the sorted order of the ticket prices and display the kth smallest ticket price from the sorted list.



Company Tags: Capgemini
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
    cout << "Sorted order: ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    int target;
    cin >> target;
    cout << endl
         << "The kth smallest element is: " << arr[target - 1];
}