/*
Problem Statement



Rithi is building a simple text editor that allows users to type characters, undo their typing, and view the current text. She has decided to implement this text editor using an array-based stack data structure.



She has to develop a basic text editor with the following features:

Type a Character (Push): Users can type a character and add it to the text editor.
Undo Typing (Pop): Users can undo their typing by removing the last character they entered from the editor.
View Current Text (Display): Users can view the current text in the editor, which is the sequence of characters in the buffer.
Exit: Users can exit the text editor application.


Write a program that simulates this text editor's undo feature using a character stack and implements the push, pop, and display operations accordingly.
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
            cout << "Undo: Removed character " << arr[top] << endl;
            top--;
        }
        else
        {
            cout << "Text editor buffer is empty. Nothing to undo." << endl;
        }
    };

    void display()
    {
        cout << "Current text: ";
        for (int i = top; i >= 0; i--)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    };
};

int main()
{
    int i = 1;
    Stack s1(100);
    int cnt = 0;
    while (i > 0)
    {
        int a;
        cin >> a;
        if (a == 4)
        {
            break;
        };
        if (a == 1)
        {
            string value;
            cin >> value;
            cout << "Typed character: " << value << endl;
            s1.push(value);
            cnt++;
        };
        if (a == 2)
        {
            s1.pop();
        }
        if (a == 3)
        {
            if (cnt == 0)
            {
                cout << "Text editor buffer is empty." << endl;
            }
            else
            {
                s1.display();
            };
        }
        if (a > 4)
        {
            cout << "Invalid choice" << endl;
        }
    };
};
