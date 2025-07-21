#include <bits/stdc++.h>
using namespace std;

int main()
{
    stack<int> st;
    // input
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        st.push(val);
    }
    // output
    while (!st.empty())
    {
        cout << st.top() << endl;
        st.pop();
    }
    return 0;
}