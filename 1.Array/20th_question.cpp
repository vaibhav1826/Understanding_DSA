/*
Cost of Groceries
Chef visited a grocery store for fresh supplies. There are
N
N items in the store where the
i
t
h
i
th
  item has a freshness value
A
i
A
i
​
  and cost
B
i
B
i
​
 .

Chef has decided to purchase all the items having a freshness value greater than equal to
X
X. Find the total cost of the groceries Chef buys.

*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        int a[n], b[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int j = 0; j < n; j++)
        {
            cin >> b[j];
        }
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] >= x)
            {
                sum = sum + b[i];
            }
        }
        cout << sum << endl;
    }
}
