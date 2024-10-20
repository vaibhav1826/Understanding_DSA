/*
Problem Statement



John is managing a list of numbers using a stack implemented as an array. He wants to push numbers onto the stack, calculate the average of the numbers in the stack, and pop a number from the stack while displaying the current average. Write a program to assist him with these tasks.
*/
#include <iostream>
#include <iomanip>
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
            cout << "Popped Value: " << arr[top] << endl;
            top--;
        }
        else
        {
            cout << "Stack underflow" << endl;
        }
    };

    int peek()
    {
        if (top >= 0)
        {
            return arr[top];
        }
        else
        {
            cout << "stack is empty" << endl;
        }
    };
    void average()
    {
        float sum = 0;
        int cnt = 0;
        for (int i = 0; i <= top; i++)
        {
            sum = sum + arr[i];
            cnt++;
        }
        cout << fixed << setprecision(2) << sum / cnt << endl;
        ;
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
    Stack st(size);
    for (int i = 0; i < size; i++)
    {
        int a;
        cin >> a;
        st.push(a);
    };
    cout << "Initial Stack: ";
    st.display();
    cout << "Average: ";
    st.average();
    st.pop();
    cout << "Updated Average: ";
    st.average();
};