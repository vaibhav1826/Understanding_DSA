#include <iostream>
using namespace std;
class stack
{
public:
    int *arr;
    int size;
    int top;
    stack(int size)
    {
        this->size = size;
        arr = new int[size];
        top = -1;
    };

    void push(int data)
    {
        if (size - top >= 1)
        {
            top++;
            arr[top] = data;
        }
        else
        {
            cout << "stack overflow" << endl;
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
            cout << "stack underflow" << endl;
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
            return -1;
        }
    };

    bool isempty()
    {
        if (top == -1)
        {
            return true;
        }
        else
        {
            return false;
        }
    };

    void display()
    {
        for (int i = 0; i <= top; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    };
};

int main()
{
    int size;
    cout << "enter the size: ";
    cin >> size;
    stack st(size);
    for (int i = 0; i < size; i++)
    {
        int value;
        cin >> value;
        st.push(value);
    };
    st.display();
    st.pop();
    st.display();
};