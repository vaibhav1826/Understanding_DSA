/*
Problem Statement



You are working on a mathematics application that requires merging two sorted lists of numbers into a single sorted list without any duplicates. Your task is to write a program that performs this merging operation on two lists of numbers.



Your program should merge the numbers from the first and second lists into a single sorted list, removing any duplicate numbers. The merged list should contain all the unique numbers, arranged in ascending order.



After merging the lists, your program should output the numbers in the merged list, according to the initial array.

*/

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
    int mergearray[size1 + size2];
    for (int i = 0; i < size1; i++)
    {
        mergearray[i] = arr1[i];
    }
    for (int i = 0; i < size2; i++)
    {
        mergearray[size1 + i] = arr2[i];
    }

    for (int i = 0; i < size1 + size2; i++)
    {
        for (int j = i; j < size1 + size2; j++)
        {
            if (mergearray[i] > mergearray[j])
            {
                int temp = mergearray[i];
                mergearray[i] = mergearray[j];
                mergearray[j] = temp;
            }
        }
    }

    for (int i = 0; i < size1; i++)
    {
        cout << mergearray[i] << " ";
    }
    cout << endl;
    for (int i = size1; i < size1 + size2; i++)
    {
        cout << mergearray[i] << " ";
    }
    return 0;
}