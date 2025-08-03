#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *left;
    Node *right;

    Node(int val)
    {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};
Node *input_tree()
{
    int val;
    cin >> val;
    if (val == -1)
        return NULL;

    Node *root = new Node(val);
    queue<Node *> q;
    q.push(root);

    while (!q.empty())
    {
        Node *p = q.front();
        q.pop();
        int l, r;
        cin >> l >> r;

        if (l != -1)
        {
            p->left = new Node(l);
            q.push(p->left);
        }
        if (r != -1)
        {
            p->right = new Node(r);
            q.push(p->right);
        }
    }
    return root;
}

void level_order_print(Node *root, int level_x)
{
if (!root)
    {
        cout << "Invalid" << endl;
        return;
    }
    queue<pair<Node *, int>> q;
    q.push({root, 0});
    bool found = false;
    while (!q.empty())
    {
        Node *f = q.front().first;
        int level = q.front().second;
        q.pop();
        if (level > level_x)
        {
            break;
        }
        if (level == level_x)
        {
            cout << f->val << " ";
            found = true;
        }

        if (f->left)
        {
            q.push({f->left, level + 1});
        }
        if (f->right)
        {
            q.push({f->right, level + 1});
        }
    }
    if (!found)
    {
        cout << "Invalid";
    }
}
int main()
{
    Node *root = input_tree();
    int x;
    cin >> x;
    level_order_print(root, x);
    return 0;
}