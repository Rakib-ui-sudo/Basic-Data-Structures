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

void insert_tail(Node *&head, Node *&tail, int &length, int val)
{
    Node *newnode = new Node(val);
    if (head == NULL)
    {
        head = newnode;
        tail = newnode;
    }
    else
    {
        tail->next = newnode;
        tail = newnode;
    }
    length++;
}

// insert 'val' at position 'idx' (0-indexed), idx can range from 0 to length
bool insert_at_index(Node *&head, Node *&tail, int &length, int idx, int val)
{
    if (idx < 0 || idx > length)
    {
        return false; // invalid
    }

    Node *newnode = new Node(val);

    if (idx == 0)
    {
        newnode->next = head;
        head = newnode;
        if (tail == NULL) // list was empty
        {
            tail = newnode;
        }
    }
    else
    {
        Node *tmp = head;
        for (int i = 0; i < idx - 1; i++)
        {
            tmp = tmp->next;
        }
        newnode->next = tmp->next;
        tmp->next = newnode;
        if (newnode->next == NULL) // inserted at the end
        {
            tail = newnode;
        }
    }

    length++;
    return true;
}

void print_linked_list(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val;
        if (tmp->next != NULL)
            cout << " ";
        tmp = tmp->next;
    }
    cout << endl;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int length = 0;
    int n;

    // read initial list until -1
    while (cin >> n)
    {
        if (n == -1)
        {
            break;
        }
        insert_tail(head, tail, length, n);
    }

    int q;
    cin >> q;

    while (q--)
    {
        int idx, val;
        cin >> idx >> val;

        bool ok = insert_at_index(head, tail, length, idx, val);

        if (!ok)
        {
            cout << "Invalid" << endl;
        }
        else
        {
            print_linked_list(head);
        }
    }

    return 0;
}