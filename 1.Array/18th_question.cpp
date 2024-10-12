/*
Problem Statement



Imagine you are working on a student management system for a school. As part of the system, you need to develop a feature that allows teachers to enter the names of students in a class and obtain a sorted list of student names. This will help them organize the students alphabetically for various administrative tasks.



Write a program that takes input for the number of students in the class and their names. The program should then sort the names in ascending order using bubble sort and display the sorted list.


*/

#include <iostream>
#include <string>
using namespace std;
int main()
{
    int size;
    cin >> size;
    string arr[size];
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}