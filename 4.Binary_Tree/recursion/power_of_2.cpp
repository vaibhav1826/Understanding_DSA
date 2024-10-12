#include <iostream>
using namespace std;

int power(int a)
{
    if (a == 0)
    {
        return 1;
    }
    return 2 * power(a - 1);
}

// main code
int main()
{
    int a;
    cout << "enter the number in power of 2: ";
    cin >> a;
    int ans = power(a);
    cout << ans;
};