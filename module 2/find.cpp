#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v = {1, 2, 3, 4, 5, 6,7,8,9};
    
   
    auto it = find(v.begin(), v.end(), 40);

    if (it == v.end())
    {
        cout << "Not Found";
    }
    else
    {
         cout << "Found";
    }
    
}