// using stl in taking string  for min heap
#include <iostream>
#include <queue>
using namespace std;
int main()
{
    typedef pair<int, string> Package;
    priority_queue<Package, vector<Package>, greater<Package>> q;
    q.push({1, "vaibhav"});
    q.push({2, "arnav"});
    q.push({3, "sardo"});
    priority_queue<Package, vector<Package>, greater<Package>> q1 = q;
    while (!q1.empty())
    {
        cout << q1.top().second << " ";
        q1.pop();
    };
    cout << q.top().second << " ";
    cout << q.size();
};

// in integer
