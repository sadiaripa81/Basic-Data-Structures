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
    Node *root;
    if (val == -1)
        root = NULL;
    else
        root = new Node(val);
    queue<Node *> q;
    if (root != NULL)
    {
        q.push(root);
    }

    while (!q.empty())
    {
        Node *p = q.front();
        q.pop();

        int l, r;
        cin >> l >> r;
        Node *my_left, *my_right;

        if (l == -1)
            my_left = NULL;
        else
            my_left = new Node(l);

        if (r == -1)
            my_right = NULL;
        else
            my_right = new Node(r);

        p->left = my_left;
        p->right = my_right;

        if (p->left)
            q.push(p->left);
        if (p->right)
            q.push(p->right);
    }
    return root;
}
int count_leaf_node(Node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    if (root->left == NULL && root->right == NULL)
    {
        return 1;
    }
    int l = count_leaf_node(root->left);
    int r = count_leaf_node(root->right);
    return l + r;
}
int main()
{
    Node *root = input_tree();
    cout << count_leaf_node(root);
    return 0;
}