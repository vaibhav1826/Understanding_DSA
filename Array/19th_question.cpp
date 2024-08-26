/*
problem statement -- Take discount or Not

There are
N
N items in a shop. You know that the price of the
i
i-th item is
A
i
A
i
​
 . Chef wants to buy all the
N
N items.

There is also a discount coupon that costs
X
X rupees and reduces the cost of every item by
Y
Y rupees. If the price of an item was initially
≤
Y
≤Y, it becomes free, i.e, costs
0
0.

Determine whether Chef should buy the discount coupon or not. Chef will buy the discount coupon if and only if the total price he pays after buying the discount coupon is strictly less than the price he pays without buying the discount coupon.
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x, y;
        cin >> n >> x >> y;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int original_cost = 0;
        for (int i = 0; i < n; i++)
        {
            original_cost = original_cost + a[i];
        }
        int discount_cost = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] > y)
            {
                discount_cost = discount_cost + a[i] - y;
            }
        }
        int total_cost = discount_cost + x;
        if (total_cost < original_cost || total_cost == discount_cost)
        {
            cout << "COUPON" << endl;
        }
        else
        {
            cout << "NO COUPON" << endl;
        }
    }
}
