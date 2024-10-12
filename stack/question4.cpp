/*
Problem Statement



Meet Alex, a computer science student who loves solving programming challenges.



Today, Alex is tasked with creating a program to simulate a stack data structure using linked lists.



The objective is to provide a menu-driven interface for performing essential stack operations:

Push elements onto the stack
Pop elements from the stack
Display the current stack contents


Additionally, Alex needs to ensure that the program handles stack underflow conditions. Help him to accomplish the task.
*/

#include <iostream>
using namespace std;
class Stack
{
public:
    string *arr;
    int size;
    int top;

    Stack(int size)
    {
        this->size = size;
        arr = new string[size];
        top = -1;
    };

    void push(string element)
    {
        if (size - top > 1)
        {
            top++;
            cout << element << " is pushed onto the stack" << endl;
            arr[top] = element;
        }
        else
        {
            cout << "Stack overflow" << endl;
        }
    };

    void pop()
    {
        if (top >= 0)
        {
            cout << arr[top] << " is popped from the stack" << endl;
            top--;
        }
        else
        {
            cout << "Stack Underflow" << endl;
        }
    };

    void display()
    {
        if (top == -1)
        {
            cout << "stack is empty" << endl;
        }
        else
        {
            cout << "Elements in the stack: ";
            for (int i = top; i >= 0; i--)
            {
                cout << arr[i] << " ";
            }
            cout << endl;
        };
    };
};

int main()
{
    int i = 1;
    Stack s1(100);
    while (i > 0)
    {
        int a;
        cin >> a;
        if (a == 4)
        {
            cout << "Exiting the program" << endl;
            break;
        };
        if (a == 1)
        {
            string value;
            cin >> value;
            s1.push(value);
        };
        if (a == 2)
        {
            s1.pop();
        }
        if (a == 3)
        {
            s1.display();
        };
        if (a > 4)
        {
            cout << "Invalid choice" << endl;
        };
    };
}
