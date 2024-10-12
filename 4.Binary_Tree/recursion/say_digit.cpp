#include <iostream>
using namespace std;
void say(int a)
{
    if (a == 0)
    {
        cout << "zero ";
    }
    else if (a == 1)
    {
        cout << "One ";
    }
    else if (a == 2)
    {
        cout << "Two ";
    }
    else if (a == 3)
    {
        cout << "Three ";
    }
    else if (a == 4)
    {
        cout << "Four ";
    }
    else if (a == 5)
    {
        cout << "Five ";
    }
    else if (a == 6)
    {
        cout << "Six ";
    }
    else if (a == 7)
    {
        cout << "Seven ";
    }
    else if (a == 8)
    {
        cout << "Eight ";
    }
    else if (a == 9)
    {
        cout << "Nine ";
    }
};
void saydigit(int a)
{
    if (a == 0)
    {
        return;
    }
    int temp = a % 10;
    say(temp);
    saydigit(a / 10);
};

int main()
{
    int a;
    cout << "Enter the number till where you want to print: ";
    cin >> a;
    int rem = 0;
    while (a > 0)
    {
        int temp = a % 10;
        rem = rem * 10 + temp;
        a = a / 10;
    }
    saydigit(rem);
    return 0;
}
