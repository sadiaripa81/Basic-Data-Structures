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

void reverse_leaf_print(Node *root)
{
    if (!root)
    {
        return;
    }
    queue<Node *> q;
    vector<int> leaf;
    q.push(root);

    while (!q.empty())
    {
        Node *f = q.front();
        q.pop();

        if (f->left == NULL && f->right == NULL)
        {
            leaf.push_back(f->val);
        }

        if (f->left)
        {
            q.push(f->left);
        }
        if (f->right)
        {
            q.push(f->right);
        }
    }
    sort(leaf.rbegin(), leaf.rend());

    for (int i = 0; i < leaf.size(); i++)
    {
        cout << leaf[i] << " ";
    }
}
int main()
{
    Node *root = input_tree();
    reverse_leaf_print(root);
    return 0;
}