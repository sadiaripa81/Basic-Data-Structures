#include <bits/stdc++.h>
using namespace std;

int main()
{
    stack<int> A;
    queue<int> B;
    int n;
    cin >> n;
    int m;
    cin >> m;
    // input stack A
    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        A.push(val);
    }
    // input queue B

    for (int i = 0; i < m; i++)
    {
        int val;
        cin >> val;
        B.push(val);
    }

    if (A.size() != B.size())
    {
        cout << "NO" << endl;
        return 0;
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
