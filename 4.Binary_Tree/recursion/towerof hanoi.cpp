#include <iostream>
using namespace std;

// function for the tower of hanoi algorithm using recursion
void towerofhanoi(int n, char source, char aux, char destination)
{
    if (n == 0)
    {
        return;
    }
    towerofhanoi(n - 1, source, destination, aux);
    cout << "move disk " << n << " from " << source << " to " << destination << endl;
    towerofhanoi(n - 1, aux, source, destination);
};

// source code
int main()
{
    towerofhanoi(3, 'A', 'B', 'C');
};