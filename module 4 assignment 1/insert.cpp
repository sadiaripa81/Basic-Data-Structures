#include <bits/stdc++.h>
#include <vector>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> v1(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v1[i];
    }

    int m;
    cin >> m;
    vector<int> v2(m);
    for (int i = 0; i < m; i++)
    {
        cin >> v2[i];
    }

    int index;
    cin >> index;

    v1.insert(v1.begin() + index, v2.begin(), v2.end());

    for (int i = 0; i < v1.size(); i++)
    {
        cout << v1[i] << " ";
    }
}