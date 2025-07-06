// You will be given a singly linked list of integer values as input. You need to remove duplicate values from the linked list and finally print the linked list.
// The process is, for each node N, traverse from that node and delete all nodes where the values are same with N.
// Input Format
// First line will contain the values of the singly linked list, and will terminate with -1.



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

void remove_duplicates(Node *head)
{
    for (Node *i = head; i != NULL; i = i->next)
    {
        Node *prev = i;
        Node *j = i->next;
        while (j != NULL)
        {
            if (j->val == i->val)
            {
                prev->next = j->next;
                delete j;
                j = prev->next;
            }
            else
            {
                prev = j;
                j = j->next;
            }
        }
    }
}

void print_list(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
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

    remove_duplicates(head);
    print_list(head);

    return 0;
}