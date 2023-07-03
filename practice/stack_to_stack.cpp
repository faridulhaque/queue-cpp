#include <bits/stdc++.h>
using namespace std;

int main()
{

    stack<int> st;

    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        st.push(x);
    }

    stack<int> st_rev;

    while (!st.empty())
    {
        int x = st.top();
        st_rev.push(x);
        st.pop();
    }

    while (!st_rev.empty())
    {
        cout << st_rev.top() << " ";
        st_rev.pop();
    }

    return 0;
}