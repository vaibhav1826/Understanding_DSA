// program for factorial using recursion
#include <iostream>
using namespace std;
int factorial(int a)
{
    if (a == 0)
    {
        return 1; // if a==0 than it return 1;
    }
    return a * factorial(a - 1); // recursion-->  calling function inside itself
};

// main code

int main()
{
    cout << "enter the number: ";
    int a;
    cin >> a;
    int fact = factorial(a);
    cout << fact;
}