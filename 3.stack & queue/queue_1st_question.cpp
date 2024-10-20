#include <iostream>
#include <queue>
using namespace std;

int main()
{
    queue<int> q;
    int i = 1;

    while (i > 0)
    {
        int a;
        cin >> a;

        if (a == 1)
        {
            int value;
            cin >> value;
            q.push(value);
            cout << "Print job with " << value << " pages is enqueued" << endl;
        }
        else if (a == 2)
        {
            if (q.empty())
            {
                cout << "Queue is empty" << endl;
            }
            else
            {
                cout << "Processing print job: " << q.front() << endl;
                q.pop();
            }
        }
        else if (a == 3)
        {
            if (q.empty())
            {
                cout << "Queue is empty" << endl;
            }
            else
            {
                cout << "Print jobs in the queue: ";
                queue<int> temp = q; // Use a temporary queue to display elements
                while (!temp.empty())
                {
                    cout << temp.front() << " ";
                    temp.pop();
                }
                cout << endl;
            }
        }
        else if (a > 3)
        {
            cout << "Invalid option" << endl;
        }
        else if (a == 0)
        {
            cout << "Exiting the program" << endl;
            break;
        }
    }
    return 0;
}
