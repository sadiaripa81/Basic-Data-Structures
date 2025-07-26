#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        string str;
        cin >> str;
        stack<char> st;
        for (int i = 0; i < str.length(); i++)
        {
            if (st.empty())
            {
                st.push(str[i]);
            }
            else if (st.top() == '0' && str[i] == '1')
            {
                st.pop();
            }
            else
            {
                st.push(str[i]);
            }
        }

        if (st.empty())
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
