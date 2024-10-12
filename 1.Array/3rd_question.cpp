/*
Problem Statement



Given an array of strings, write a program to traverse through the array and find the index of a specific string. The program should prompt the user to enter the string to be searched and then display the index if found or a message indicating that the string was not found.

*/

#include <iostream>
using namespace std;
int main()
{
    int a, c = 0;
    cin >> a;
    string arr[a];
    for (int i = 0; i < a; i++)
    {
        cin >> arr[i];
    }
    string target;
    cin >> target;
    for (int i = 0; i < a; i++)
    {
        if (arr[i] == target)
        {
            cout << i;
            c++;
        }
    }
    if (c == 0)
    {
        cout << "String not found!";
    }
    return 0;
}