#include <iostream>
using namespace std;
class queue
{
public:
    int size;
    int front;
    int rear;
    int *arr;
    queue(int size)
    {
        this->size = size;
        front = 0;
        rear = 0;
        arr = new int[size];
    };
    void push(int data)
    {
        if (front == size)
        {
            cout << "queue is full";
        }
        else
        {
            arr[rear] = data;
            rear++;
        }
    };

    void pop()
    {
        if (front == rear)
        {
            cout << "queue is empty";
        }
        else
        {
            front++;
            if (front == rear)
            {
                front = 0;
                rear = 0;
            }
        }
    };

    void peek()
    {
        if (front != rear)
        {
            cout << arr[front];
        }
        else
        {
            cout << "queue is empty";
        }
    };

    bool isempty()
    {
        if (front == rear)
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
        for (int i = front; i < rear; i++)
        {
            cout << arr[i] << " ";
        }
    };
};

int main()
{
    int size;
    cin >> size;
    queue qt(size);
    for (int i = 0; i < size; i++)
    {
        int value;
        cin >> value;
        qt.push(value);
    }
    qt.display();
    qt.pop();
    cout << endl;
    qt.display();
    cout << endl;
    cout << "front element : ";
    qt.peek();
    qt.pop();
    qt.pop();
    cout << endl;
    qt.display();
};
