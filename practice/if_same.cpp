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

    int size()
    {
        return sz;
    }
};

int main()
{
    myQueue q_1;
    myQueue q_2;

    int n_1;
    cin >> n_1;

    for (int i = 0; i < n_1; i++)
    {
        int x;
        cin >> x;
        q_1.push(x);
    }

    int n_2;
    cin >> n_2;

    for (int i = 0; i < n_2; i++)
    {
        int x;
        cin >> x;
        q_2.push(x);
    }

    int flag = 1;

    if (q_1.size() != q_2.size())
    {
        flag = 0;
    }

    else
    {

        while (!q_1.empty())
        {

            if (q_1.front() != q_2.front())
            {
                flag = 0;
                break;
            }
            q_1.pop();
            q_2.pop();
        }
    }

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