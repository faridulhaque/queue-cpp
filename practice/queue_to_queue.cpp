#include <bits/stdc++.h>
using namespace std;

int main()
{

    queue<int> que;

    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        que.push(x);
    }

    stack<int> st;

    while (!que.empty())
    {
        int x = que.front();
        st.push(x);
        que.pop();
    }

    while (!st.empty())
    {
        cout << st.top() << " ";
        st.pop();
    }

    return 0;
}