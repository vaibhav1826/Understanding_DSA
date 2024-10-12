#include <iostream>
using namespace std;

int fibanoci(int a)
{
    if (a == 0)
    {
        return 0;
    };
    if (a == 1)
    {
        return 1;
    };
    int ans = fibanoci(a - 1) + fibanoci(a - 2);
    return ans;
};

int main()
{
    int a;
    cout << "Enter the number till where you want to print: ";
    cin >> a;
    cout << fibanoci(a);
    return 0;
}
