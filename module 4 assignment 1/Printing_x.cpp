#include <bits/stdc++.h>
#include <vector>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int mid = n / 2;

    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {

            if (i < mid)
            {
                if (j == i)
                    cout << "\\";
                else if (j == n - 1 -i)
                    cout << "/";
                else
                    cout << " ";
            }
            else if (i == mid)
            {
                if (j == mid)
                    cout << "X";
                else
                    cout << " ";
            }
            else
            {
                if (j == n - 1 - i)
                    cout << "/";
                else if (j == i)
                    cout << "\\";
                else
                    cout << " ";
            }
        }
        cout << endl;
    }
}