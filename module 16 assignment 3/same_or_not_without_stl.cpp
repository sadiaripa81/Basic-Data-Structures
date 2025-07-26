#include <bits/stdc++.h>
using namespace std;

class myStack
{
public:
    list<int> l;

    void push(int val)
    {
        l.push_back(val);
    }
    void pop()
    {
        l.pop_back();
    }
    int top()
    {
        return l.back();
    }
    int size()
    {
        return l.size();
    }
    bool empty()
    {
        return l.empty();
    }
};
class myQueue
{
public:
    list<int> l;

    void push(int val) //   O(1)
    {
        l.push_back(val);
    }
    void pop() //   O(1)
    {
        l.pop_front();
    }
    int front() //   O(1)
    {
        return l.front();
    }
    int back() //   O(1)
    {
        return l.back();
    }
    int size() //   O(1)
    {
        return l.size();
    }
    bool empty() //   O(1)
    {
        return l.empty();
    }
};
int main()
{
    myStack A;
    myQueue B;
    int n;
    cin >> n;
    int m;
    cin >> m;
    for (int i = 0; i < n; i++)
    {
        int valStack;
        cin >> valStack;
        A.push(valStack);
    }
    for (int i = 0; i < m; i++)
    {
        int val_queue;
        cin >> val_queue;
        B.push(val_queue);
    }

    if (A.size() != B.size())
    {
        cout << "NO" << endl;
    }
    else
    {
        bool flag = true;
        while (!A.empty())
        {
            if (A.top() != B.front())
            {
                flag = false;
                break;
            }
            A.pop();
            B.pop();
        }
        if (flag == true)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}
