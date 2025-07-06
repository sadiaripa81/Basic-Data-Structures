// You need to take a singly linked list of integer values as input. Afterward, you will be given an integer value X.
// Your task is to determine whether X is present in the linked list or not. If it is present,
// print its first index from the left side; otherwise, print -1. Assume that the linked list's index starts with 0.
// Input Format
// First line will contain T, the number of test cases.
// First line of each test case will contain the values of the singly linked list, and will terminate with -1.
// Second line of each test case will contain X.

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

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        Node *head = NULL;
        Node *tail = NULL;
        int val;
        while (cin >> val && val != -1)
        {
            insert_at_tail(head, tail, val);
        }

        int target_val;
        cin >> target_val;

        int idx = 0;
        bool found = false;
        Node *tmp = head;
        while (tmp != NULL)
        {
            if (tmp->val == target_val)
            {
                cout << idx << endl;
                found = true;
                break;
            }
            tmp = tmp->next;
            idx++;
        }

        if (found == false)
        {
            cout << -1 << endl;
        }
    }
    return 0;
}