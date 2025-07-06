// You will be given two singly linked list of integer values as input.
// You need to check if all the elements of both list are same which means both list are same. If they are same print "YES" otherwise print "NO".

// Note: You must use singly linked list
// Input Format
// First line will contain the values of the first singly linked list, and will terminate with -1.
// Second line will contain the values of the second singly linked list, and will terminate with -1.


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
    Node *head_1 = NULL;
    Node *tail_1 = NULL;
    int val;

    while (cin >> val && val != -1)
    {
        insert_at_tail(head_1, tail_1, val);
    }

    Node *head_2 = NULL;
    Node *tail_2 = NULL;

    while (cin >> val && val != -1)
    {
        insert_at_tail(head_2, tail_2, val);
    }

    Node *tmp_1 = head_1;
    Node *tmp_2 = head_2;
    int flag = 0;

    while (tmp_1 != NULL && tmp_2 != NULL)
    {
        if (tmp_1->val != tmp_2->val)
        {
            flag = 1;
            break;
        }
        tmp_1 = tmp_1->next;
        tmp_2 = tmp_2->next;
    }

    if (tmp_1 != NULL || tmp_2 != NULL)
    {
        flag = 1;
    }

    if (flag == 0)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}