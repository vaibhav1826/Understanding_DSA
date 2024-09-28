/*
Problem Statement



Nandha is learning about data structures and wants to implement a stack data structure using an array. He seeks your help in writing a program that can perform stack operations like push and pop as well as display the top element of the stack. The program should display the top element of the stack or indicate if the stack is empty.



Can you help him write this program?
*/

#include <iostream>
using namespace std;
class Stack
{
public:
    int *arr;
    int size;
    int top;
    Stack(int size)
    {
        this->size = size;
        arr = new int[size];
        top = -1;
    };

    void push(int element)
    {
        if (size - top > 1)
        {
            top++;
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
            top--;
        }
        else
        {
            cout << "Stack underflow" << endl;
        }
    };

    int pseek()
    {
        if (top >= 0)
        {
            cout << "Top element is " << arr[top] << endl;
        }
        else
        {
            cout << "Stack is empty" << endl;
        }
    };

    void display()
    {
        for (int i = top; i >= 0; i--)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    };
};

int main()
{
    int size;
    cin >> size;
    if (size == 0)
    {
        cout << "Stack is empty";
    }
    else
    {
        Stack st(size);
        for (int i = 0; i < size; i++)
        {
            int a;
            cin >> a;
            st.push(a);
        };
        st.display();
        st.pseek();
        st.pop();
        st.display();
        st.pseek();
    }
}