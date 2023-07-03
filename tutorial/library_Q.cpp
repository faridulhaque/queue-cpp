#include <bits/stdc++.h>
using namespace std;

class myQueue
{
public:
    list<int> l;

    void push(int val)
    {
        l.push_back(val);
    }

    void pop()
    {
        l.pop_front();
    }

    int front()
    {
        return l.front();
    }

    bool empty()
    {
       return l.empty();
    }

    int size()
    {
        return l.size();
    }
};

int main()
{
    myQueue q;

    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        q.push(x);
    }

    while (!q.empty())
    {
        std::cout << q.front() << endl;
        q.pop();
    }

    return 0;
}