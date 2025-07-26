 if (A.size() != B.size())
    {
        cout << "NO" << endl;
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