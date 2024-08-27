/*
Largest and Second Largest
You are given an array
A
A of
N
N integers.
Find the maximum sum of two distinct integers in the array.

Note: It is guaranteed that there exist at least two distinct integers in the array.
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int max = 0;
        for (int i = 0; i < n; i++)
        {
            if (max < a[i])
            {
                max = a[i];
            }
        }
        int second_max = 0;
        for (int i = 0; i < n; i++)
        {
            if (second_max < a[i] && a[i] != max)
            {
                second_max = a[i];
            }
        }

        cout << max + second_max << endl;
    }
}
