#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v = {1, 2, 3, 4, 5, 6,7,8,9};
    vector<int> v2 = {100, 200, 300};

    // erase single value
    // v.erase(v.begin() + 3);

    // erase multiple value
    v.erase(v.begin() + 2, v.begin() + 4);

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
}