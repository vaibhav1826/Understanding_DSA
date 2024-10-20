#include <iostream>
#include <queue>
using namespace std;
int main()
{
    int i = 1;
    typedef pair<int, string> package;
    priority_queue<package, vector<package>, greater<package>> q;
    while (i > 0)
    {
        int value;
        cin >> value;
        if (value == 1)
        {
            cin.ignore();
            string des;
            getline(cin, des);
            int priority;
            cin >> priority;
            if (priority >= 1 || priority <= 5)
            {
                cout << "package added to delivery queue" << endl;
                q.push({priority, des});
            }
            else
            {
                cout << "priority is not between 1 to 5";
            }
        }
        else if (value == 2)
        {
            if (q.empty())
            {
                cout << "queue is empty" << endl;
            }
            else
            {
                cout << "deliver package to : " << q.top().second << endl;
                q.pop();
            }
        }
        else if (value == 3)
        {
            if (q.empty())
            {
                cout << "No packages in the delivery queue" << endl;
            }
            else
            {
                priority_queue<package, vector<package>, greater<package>> temp = q;
                while (!temp.empty())
                {
                    cout << temp.top().second << " ";
                    temp.pop();
                }
                cout << endl;
            }
        }
        else if (value == 4)
        {
            cout << "exit the program" << endl;
            break;
        }
        else
        {
            cout << "invalid option" << endl;
        }
    };
};