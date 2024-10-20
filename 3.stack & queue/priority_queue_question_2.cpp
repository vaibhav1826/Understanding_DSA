#include <iostream>
#include <queue>
using namespace std;
int main()
{
    typedef pair<int, string> flight;
    priority_queue<flight, vector<flight>, greater<flight>> q;
    int i = 1;
    while (i > 0)
    {
        int value;
        cin >> value;
        if (value == 1)
        {
            cin.ignore();
            string number;
            getline(cin, number);
            int dep;
            cin >> dep;
            double ticket;
            cin >> ticket;
            cout << "flight added to the system" << endl;
            q.push({dep, number});
        }
        else if (value == 2)
        {
            if (q.empty())
            {
                cout << "queue is empty" << endl;
            }
            else
            {
                cout << "booked ticket for flight : " << q.top().second << endl;
                q.pop();
            }
        }
        else if (value == 3)
        {
            if (q.empty())
            {
                cout << "no avaliable flight" << endl;
            }
            else
            {
                while (!q.empty())
                {
                    cout << q.top().second << " ";
                    q.pop();
                }
                cout << endl;
            }
        }
        else if (value == 4)
        {
            cout << "exiting the application" << endl;
            break;
        }
        else
        {
            cout << "invalid option" << endl;
        }
    };
};
