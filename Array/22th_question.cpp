/*
Running Comparison
Alice and Bob recently got into running, and decided to compare how much they ran on different days.

They each ran for
N
N days — on the
i
t
h
i
th
  day, Alice ran
A
i
A
i
​
  meters and Bob ran
B
i
B
i
​
  meters.

On each day,

Alice is unhappy if Bob ran strictly more than twice her distance, and happy otherwise.
Similarly, Bob is unhappy if Alice ran strictly more than twice his distance, and happy otherwise.
For example, on a given day

If Alice ran
200
200 meters and Bob ran
500
500, Alice would be unhappy but Bob would be happy.
If Alice ran
500
500 meters and Bob ran
240
240, Alice would be happy and Bob would be unhappy.
If Alice ran
300
300 meters and Bob ran
500
500, both Alice and Bob would be happy.
On how many of the
N
N days were both Alice and Bob happy?
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
        int a[n], b[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }
        int count = 0;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            if (a[i] < b[i] / 2)
            {
                arr[i] = 1;
            }
            else
            {
                arr[i] = 0;
            }
        }
        int arr1[n];
        for (int i = 0; i < n; i++)
        {
            if (b[i] < a[i] / 2)
            {
                arr1[i] = 1;
            }
            else
            {
                arr1[i] = 0;
            }
        }
        for (int i = 0; i < n; i++)
        {
            if (arr[i] == arr1[i])
            {
                count++;
            }
        }
        cout << count << endl;
    }
}
