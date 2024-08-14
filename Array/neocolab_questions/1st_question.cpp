/*Silvia needs to develop a program that calculates the sum of elements in an array. The program prompts the user to input the size of the array and its elements, computes the sum of all elements, and then displays the calculated sum.*/

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
    int sum = 0;
    for (int i = 0; i < a; i++)
    {
        sum = sum + arr[i];
    }
    cout << sum;
    return 0;
}
