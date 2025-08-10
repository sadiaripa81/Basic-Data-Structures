#include <bits/stdc++.h>
using namespace std;
int main()
{
    map<string, int> mp;
   
    mp["sadia"] = 10;
    mp["ripa"] = 20;
    mp["rabi"] = 30;
    mp["sanjit"] = 40;

    for (auto it = mp.begin(); it != mp.end(); it++)
    {
       cout << it->first <<" "<< it->second << endl;
    }
    
    if (mp.count("safia"))
    {
        cout<< "valid"<<endl;
    }
    else
    {
        cout<< "invalid"<<endl;
    }
    return 0;
}