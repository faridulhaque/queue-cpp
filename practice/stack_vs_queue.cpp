#include <bits/stdc++.h>
using namespace std;

int main()
{
    stack<int> l;
    queue<int> q;

    int n_s;
    cin >> n_s;

    for (int i = 0; i < n_s; i++)
    {
        int x;
        cin >> x;
        l.push(x);
    }

    int n_q;
    cin >> n_q;
    for (int i = 0; i < n_q; i++)
    {
        int x;
        cin >> x;
        q.push(x);
    }

    int flag = 1;

    if (n_q != n_s)
    {
        flag = 0;
    }

    else
    {
        while (!l.empty())
        {
            if (q.front() != l.top())
            {
                flag = 0;
                break;
            }
            q.pop();
            l.pop();
        }
    }

    // checking flag
    if (flag)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    return 0;
}