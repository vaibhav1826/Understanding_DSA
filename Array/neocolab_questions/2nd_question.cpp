/*
Problem Statement



Imagine you are developing an e-commerce system that manages product inventory. The system uses an array to store the product IDs. Your task is to implement a program that removes out-of-stock products from the array.



Note: Products that are out-of-stock are represented by 0.
*/

#include <iostream>
using namespace std;
int main()
{
    int a;
    cin >> a;
    int arr[a];
    for (int i = 0; i < a; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < a; i++)
    {
        if (arr[i] != 0)
        {
            cout << arr[i] << " ";
        }
    }
    return 0;
}