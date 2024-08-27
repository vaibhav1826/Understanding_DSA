/*
Difficulty Rating Order
Our Chef has some students in his coding class who are practicing problems. Given the difficulty of the problems that the students have solved in order, help the Chef identify if they are solving them in non-decreasing order of difficulty. Non-decreasing means that the values in an array is either increasing or remaining the same, but not decreasing. That is, the students should not solve a problem with difficulty
d
1
d
1
​
 , and then later a problem with difficulty
d
2
d
2
​
 , where
d
1
>
d
2
d
1
​
 >d
2
​
 .

Output “Yes” if the problems are attempted in non-decreasing order of difficulty rating and “No” if not.
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
        int d[n];
        for (int i = 0; i < n; i++)
        {
            cin >> d[i];
        }
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            arr[i] = d[i];
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = i; j < n; j++)
            {
                if (d[i] > d[j])
                {
                    swap(d[i], d[j]);
                }
            }
        }
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] != d[i])
            {
                cout << "NO" << endl;
                count++;
                break;
            }
        }
        if (count == 0)
        {
            cout << "YES" << endl;
        }
    }
}
