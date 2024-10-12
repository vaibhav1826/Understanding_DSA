/* MIN To MAX
You are given an array
A
A of size
N
N.

Let
M
M be the minimum value present in the array initially.
In one operation, you can choose an element
A
i
A
i
​

(
1
≤
i
≤
N
)
(1≤i≤N) and an integer
X
X
(
1
≤
X
≤
100
)
(1≤X≤100), and set
A
i
=
X
A
i
​
 =X.

Determine the minimum number of operations required to make
M
M the maximum value in the array
A
A.

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
        int min = a[0];
        for (int i = 0; i < n; i++)
        {
            if (a[i] < min)
            {
                min = a[i];
            }
        }
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] != min)
            {
                count++;
            }
        }
        cout << count << endl;
    }
}
