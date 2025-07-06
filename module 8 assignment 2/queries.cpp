// You have a singly linked list which is empty initially. Then you will be given Q queries. In each query you will be given two values X and V.

// If X is 0 that means you will insert the value V to the head of the linked list.
// If X is 1 then you will insert the value V to the tail of the linked list.
// If X is 2 then you will delete the value Vth index of the linked list. Assume that index starts from 0. If the index is invalid, then you shouldn't perform the deletion.
// After each query you need to print the linked list.

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
void insert_at_head(Node *&head, Node *&tail, int val)
{
    Node *newnode = new Node(val);
    newnode->next = head;
    head = newnode;
}
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
void delete_at_index(Node *&head, Node *&tail, int index)
{
    if (head == NULL)
        return;
    if (index == 0)
    {
        Node *deleteNode = head;
        head = head->next;
        delete deleteNode;

        if (head == NULL)
            tail = NULL;
        return;
    }
    Node *tmp = head;
    for (int i = 0; i < index - 1; i++)
    {
        if (tmp->next == NULL)
            return;
        tmp = tmp->next;
    }

    if (tmp->next == NULL)
        return;

    Node *deleteNode = tmp->next;
    tmp->next = tmp->next->next;

    if (tmp->next == NULL)
        tail = tmp;

    delete deleteNode;
}
void print_list(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
}

int main()
{
    int q;
    cin >> q;

    Node *head = NULL;
    Node *tail = NULL;

    for (int i = 0; i < q; i++)
    {
        int idx, val;
        cin >> idx >> val;

        if (idx == 0)
        {
            insert_at_head(head, tail, val);
            print_list(head);
            cout << endl;
        }
        else if (idx == 1)
        {
            insert_at_tail(head, tail, val);
            print_list(head);
            cout << endl;
        }
        else if (idx == 2)
        {
            delete_at_index(head, tail, val);
            print_list(head);
            cout << endl;
        }
    }
    return 0;
}
