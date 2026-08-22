#include<bits/stdc++.h>
using namespace std;

class Node
{
    public:
    int val;
    Node* next;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

void insert_head(Node* &head, Node* &tail, int val)
{
    Node* newnode = new Node(val);
    if (head == NULL)
    {
        head = newnode;
        tail = newnode;
        return;
    }
    newnode->next = head;
    head = newnode;
}

void insert_tail(Node* &head, Node* &tail, int val)
{
    Node* newnode = new Node(val);
    if (head == NULL)
    {
        head = newnode;
        tail = newnode;
        return;
    }
    tail->next = newnode;
    tail = newnode;
}

int get_length(Node* head)
{
    int len = 0;
    while (head != NULL)
    {
        len++;
        head = head->next;
    }
    return len;
}

void delete_at_index(Node* &head, Node* &tail, int idx)
{
    int len = get_length(head);

    if (idx < 0 || idx >= len)   // অবৈধ index হলে কিছুই করব না
    {
        return;
    }

    if (idx == 0)                // head ডিলিট
    {
        Node* deleteNode = head;
        head = head->next;
        delete deleteNode;

        if (head == NULL)         // লিস্ট খালি হয়ে গেলে tail ও NULL
        {
            tail = NULL;
        }
        return;
    }

    // idx-1 নম্বর নোড পর্যন্ত হাঁটব
    Node* tmp = head;
    for (int i = 0; i < idx - 1; i++)
    {
        tmp = tmp->next;
    }

    Node* deleteNode = tmp->next;
    tmp->next = deleteNode->next;
    delete deleteNode;

    if (tmp->next == NULL)        // যদি শেষ নোডটাই ডিলিট হয়ে থাকে
    {
        tail = tmp;
    }
}

void print_linked_list(Node* head)
{
    while (head != NULL)
    {
        cout << head->val << " ";
        head = head->next;
    }
    cout << endl;
}

int main()
{
    int q;
    cin >> q;

    Node* head = NULL;
    Node* tail = NULL;

    while (q--)
    {
        int x, v;
        cin >> x >> v;

        if (x == 0)
        {
            insert_head(head, tail, v);
        }
        else if (x == 1)
        {
            insert_tail(head, tail, v);
        }
        else if (x == 2)
        {
            delete_at_index(head, tail, v);
        }

        print_linked_list(head);
    }

    return 0;
}