/*
Problem Statement



Emma has a collection of unique plant species in her garden. She wants to check if a particular plant is already in her collection.



Help Emma by writing a program using a linear search algorithm that determines if the plant species is in her collection.
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
        if (arr[i] == target)
        {
            cout << "Plant species " << target << " is present in the collection";
            count++;
            break;
        }
    }
    if (count == 0)
    {
        cout << "Plant species " << target << " is not present in the collection";
    }
}