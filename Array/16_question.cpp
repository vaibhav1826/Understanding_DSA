/*
Problem Statement



On the first day of school, students randomly seat themselves. Shorter students at the back can't see the board because they're behind taller students. To fix this, the teacher decides to arrange the students in height order.



The teacher asks the students to stand in a line. She repeatedly compares the height of the first student with each of the others. If the first student is taller, they swap places. This process continues for all students, sorting them by height.



Write a program to perform this selection sort on N students.
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
    cout << "Student's height order before sorting: ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < size - 1; i++)
    {
        int min_index = i;
        for (int j = i + 1; j < size; j++)
        {
            if (arr[j] < arr[min_index])
            {
                min_index = j;
            }
        }
        if (arr[i] != arr[min_index])
        {
            swap(arr[i], arr[min_index]);
        }
        cout << "Height order of students after iteration " << i + 1 << ": ";
        for (int i = 0; i < size; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
    cout << "After final comparison of all students, the height order becomes: ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}