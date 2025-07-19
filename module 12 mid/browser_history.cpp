#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<string> addressList;
    string address;
    while (cin >> address && address != "end")
    {
        addressList.push_back(address);
    }

    auto current = addressList.begin();
    int q;
    cin >> q;

    while (q--)
    {
        string cmnd;
        cin >> cmnd;

        if (cmnd == "visit")
        {
            string addressName;
            cin >> addressName;
            auto isFound = find(addressList.begin(), addressList.end(), addressName);
            
            if (isFound != addressList.end())
            {
                  current = isFound;
                cout << *current << endl;
            }
            else
            {
                cout << "Not Available"<< endl;
            }
        }
        else if (cmnd == "prev")
        {
            if (current != addressList.begin())
            {
                --current;
                cout << *current << endl;
            }
            else
            {
                cout << "Not Available" << endl;
            }
        }
        else if (cmnd == "next")
        {
            auto nextIt = next(current);
            if (nextIt != addressList.end())
            {
                current = nextIt;
                cout << *current << endl;
            }
            else
            {
                cout << "Not Available" << endl;
            }
        }
    }
    return 0;
}
