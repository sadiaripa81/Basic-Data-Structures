// You need to take a singly linked list of integer value as input and print the difference between the maximum and minimum value of the singly linked list.
// Input will contain the values of the singly linked list, and will terminate with -1.

#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *next;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

void insert_at_tail(Node *&head, Node *&tail, int val)
{
    Node *newnode = new Node(val);
    if (head == NULL)
    {
        head = newnode;
        tail = newnode;
        return;
    }
    tail->next = newnode;
    tail = newnode;
}
int max_find(Node *head)
{
    int mx = INT_MIN;
    Node *tmp = head;
    while (tmp != NULL)
    {
        mx = max(tmp->val, mx);
        tmp = tmp->next;
    }
    return mx;
}
int min_find(Node *head)
{
    int mn = INT_MAX;
    Node *tmp = head;
    while (tmp != NULL)
    {
        mn = min(tmp->val, mn);
        tmp = tmp->next;
    }
    return mn;
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int val;

    while (cin >> val && val != -1)
    {
        insert_at_tail(head, tail, val);
    }
    int difference;
    difference = max_find(head) - min_find(head);

    cout << difference << endl;
    return 0;
}
