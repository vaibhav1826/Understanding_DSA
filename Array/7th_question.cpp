/*
Problem Statement



In a local farmers' market, you have a sorted list of fruit names arranged alphabetically. You need to find the index of the first occurrence of a specific fruit in this list. If the fruit is not present, you should return a message indicating that it has not been found.



The catch is that you should use the binary search algorithm.



Company Tags: Capgemini
*/

#include <iostream>
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
    int count = 0;
    string target;
    cin >> target;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == target)
        {
            cout << i;
            count++;
            break;
        }
    }
    if (count == 0)
    {
        cout << "Target is not found in the array";
    }
}