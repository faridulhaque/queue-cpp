#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int value;
    Node *next;

    Node(int value)
    {
        this->value = value;
        this->next = NULL;
    }
};

class myQueue
{
public:
    Node *head = NULL;
    Node *tail = NULL;

    int sz;

    void push(int val)
    {
        sz++;

        Node *newNode = new Node(val);

        if (head == NULL)
        {
            head = newNode;
            tail = newNode;
            return;
        }
        tail->next = newNode;
        tail = tail->next;
    }

    void pop()
    {
        sz--;
        Node *dNode = head;

        head = head->next;
        delete dNode;
        if (head == NULL)
        {
            tail = NULL;
        }
    }

    int front()
    {
        return head->value;
    }

    bool empty()
    {
        if (sz == 0)
        {
            return true;
        }
        else
        {

            return false;
        }
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