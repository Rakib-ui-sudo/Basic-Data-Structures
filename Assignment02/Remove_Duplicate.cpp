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

void insert_tail(Node *&head, Node *&tail, int val)
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

void print_linked_list(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}

// N নোড থেকে শুরু করে, N-এর পরের সব নোড যাদের ভ্যালু N->val-এর সমান, ডিলিট করে দাও
void remove_same_value_after(Node *N, Node *&tail)
{
    Node *prev = N;
    Node *cur = N->next;

    while (cur != NULL)
    {
        if (cur->val == N->val)
        {
            prev->next = cur->next;
            if (cur == tail)
                tail = prev;
            delete cur;
            cur = prev->next;
        }
        else
        {
            prev = cur;
            cur = cur->next;
        }
    }
}

void remove_Duplicate(Node *&head, Node *&tail)
{
    for (Node *N = head; N != NULL; N = N->next)
    {
        remove_same_value_after(N, tail);
    }
}
//-------------------------------------------------------
int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int n;
    while (true)
    {
        cin >> n;
        if (n == -1)
            break;
        insert_tail(head, tail, n);
    }

    remove_Duplicate(head, tail);
    print_linked_list(head);
    return 0;
}