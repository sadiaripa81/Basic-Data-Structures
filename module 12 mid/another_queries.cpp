#include <bits/stdc++.h>
using namespace std;

int main() {
    list<int> myList;
    int q;
    cin >> q;

    while (q--) {
        int idx, Val;
        cin >> idx >> Val;

        if (idx == 0) {
            myList.push_front(Val);
        }
        else if (idx == 1) {
            myList.push_back(Val);
        }
        else if (idx == 2) {
            if (Val >= 0 && Val < myList.size()) {
                auto it = myList.begin();
                advance(it, Val);
                myList.erase(it);
            }
        }

        cout << "L -> ";
        for (int val : myList) {
            cout << val << " ";
        }
        cout << endl;

        cout << "R -> ";
        for (auto right_it = myList.rbegin(); right_it != myList.rend(); ++right_it) {
            cout << *right_it << " ";
        }
        cout << endl;
    }

    return 0;
}
